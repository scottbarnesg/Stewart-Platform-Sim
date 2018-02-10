clc; clear; close all;
%% Set Initial Parameters
t_max = 2.0;
% Set Base's Orientation

roll = deg2rad(0); % Gamma
pitch = deg2rad(0); % Alpha
yaw = deg2rad(0); % Beta
% Apply Rotation
R = rot_x(pitch)*rot_y(yaw)*rot_z(roll);

set_param('PlatformAssem/platform_qx','Value',num2str(roll))
set_param('PlatformAssem/platform_qy','Value',num2str(pitch))

% Set Initial Servo Angles

init_angle = deg2rad(120);
servo_angles = [init_angle; -init_angle; init_angle; -init_angle; init_angle; -init_angle];
%% Reset Simulation
for num = 1:6
    path = strcat('PlatformAssem/angle',int2str(num));
    set_param(path, 'Value', num2str(servo_angles(num)));
end
set_param('PlatformAssem', 'SimulationCommand', 'step');
set_param('PlatformAssem', 'SimulationCommand', 'stop');

%% Initialize Simulation
run_sim = true;
% Start Simulation
set_param('PlatformAssem', 'SimulationCommand', 'start'); 
% Pause Simulation (Wait for Input)
set_param('PlatformAssem', 'SimulationCommand', 'pause');
step_count = 0;
tic; % Start Timer

%% Run Simulation
while(run_sim == true)
    % Get Current Simulation Time
    current_sim_time = get_param('PlatformAssem','SimulationTime');
    
    % Set **Variable** Platform Angle
    roll = deg2rad(5*sin(2*pi*1*current_sim_time)); % Gamma
    pitch = deg2rad(0); % Alpha
    yaw = deg2rad(0); % Beta
    % Apply Rotation
    set_param('PlatformAssem/platform_qx','Value',num2str(roll))
    set_param('PlatformAssem/platform_qy','Value',num2str(pitch)) 
    
    % Update Actuators
    for num = 1:6
        path = strcat('PlatformAssem/angle',int2str(num));
        set_param(path, 'Value', num2str(servo_angles(num)));
    end
    % Get Platform State
    quat_plat_state = platform_orientation.signals.values(length(platform_orientation.time), :);
    eul_plat_state = quat_to_eangles(quat_plat_state);
    trans_plat_state = platform_translation.signals.values(length(platform_translation.time), :)-platform_translation.signals.values(1, :);
    actuator_states = motor_states.signals.values(length(platform_orientation.time), :)'; %+repmat(pi,6,1);   
    % Calculate Controller Input
    servo_angles = controller_v0(eul_plat_state, actuator_states, trans_plat_state);
    % [servo_angles, error_data] = controller_v1(eul_plat_state, actuator_states, trans_plat_state, error_data);
    % Step forward by single time step (determined by solver)
    set_param('PlatformAssem', 'SimulationCommand', 'step');
    % Check for Termination Criteria
    if(current_sim_time >= t_max) % || step_count > 1000)
        run_sim = false;
        break;
    end
    disp(current_sim_time);
    step_count = step_count+1;
end
toc % End Timer
%%  Plot Results
clear alpha beta gamma x y;
for i = 1:size(platform_orientation.time, 1)
    R_m = quat_to_rot(platform_orientation.signals.values(i, :));
    eangles = quat_to_eangles(platform_orientation.signals.values(i, :));
    alpha(i) = eangles(1)*180/pi;
    beta(i) = eangles(2)*180/pi;
    gamma(i) = eangles(3)*180/pi;
    x(i) = 1000*(platform_translation.signals.values(i, 1)-platform_translation.signals.values(1, 1));
    y(i) = 1000*(platform_translation.signals.values(i, 2)-platform_translation.signals.values(1, 2));
end
plot(platform_orientation.time, alpha, platform_orientation.time, beta, platform_orientation.time, gamma, platform_orientation.time, x, platform_orientation.time, y);
legend('Alpha','Beta','Gamma', 'X', 'Y');
xlabel('Time (s)');
ylabel('Angles (degrees)');
title('Simulation Results');