close all;
clear all;
clc;

roll = 0;%pi-pi/27;
pitch = deg2rad(5);%-pi/27;
yaw = 0;%-pi/3;

R = rot_x(pitch)*rot_y(yaw)*rot_z(roll);

servo_angles = [pi/2; -pi/2; pi/2; -pi/2; pi/2; -pi/2]; % initial angles
% servo_angles = zeros(1, 6);

% Reset Simulation
servo_angles = [pi/2; -pi/2; pi/2; -pi/2; pi/2; -pi/2];
for num = 1:6
    path = strcat('PlatformAssem/angle',int2str(num));
    set_param(path, 'Value', num2str(servo_angles(num)));
end
set_param('PlatformAssem', 'SimulationCommand', 'step');
set_param('PlatformAssem', 'SimulationCommand', 'stop');

run_sim = true;

set_param('PlatformAssem', 'SimulationCommand', 'stop'); % clears old sim
set_param('PlatformAssem', 'SimulationCommand', 'start'); % starts sim
set_param('PlatformAssem', 'SimulationCommand', 'pause'); % immediately pauses

step_count = 0;
tic;
while(run_sim == true)
    % Get Current Simulation Time
    current_sim_time = get_param('PlatformAssem','SimulationTime');
    % Update Actuators
    for num = 1:6
        path = strcat('PlatformAssem/angle',int2str(num));
        set_param(path, 'Value', num2str(servo_angles(num)));
    end
    % Get Platform State
    quat_plat_state = platform_orientation.signals.values(length(platform_orientation.time), :);
    eul_plat_state = quat_to_eangles(quat_plat_state);
    trans_plat_state = platform_translation.signals.values(length(platform_translation.time), :)-platform_translation.signals.values(1, :)
    actuator_states = motor_states.signals.values(length(platform_orientation.time), :)'; %+repmat(pi,6,1);   
    % Calculate Controller Input
    servo_angles = controller_v0(eul_plat_state, actuator_states);
    % Step forward by single time step (determined by solver)
    set_param('PlatformAssem', 'SimulationCommand', 'step');
    % Check for Termination Criteria
    if(current_sim_time >= 0.5) % || step_count > 1000)
        run_sim = false;
        break;
    end
    disp(current_sim_time);
    step_count = step_count+1;
end
toc
% Plot Results
clear alpha beta gamma;
close;
for i = 1:size(platform_orientation.time, 1)
    R_m = quat_to_rot(platform_orientation.signals.values(i, :));
    eangles = quat_to_eangles(platform_orientation.signals.values(i, :));
    alpha(i) = eangles(1)*180/pi;
    beta(i) = eangles(2)*180/pi;
    gamma(i) = eangles(3)*180/pi;
end
plot(platform_orientation.time, alpha, platform_orientation.time, beta, platform_orientation.time, gamma);
legend('Alpha','Beta','Gamma');
xlabel('Time (s)');
ylabel('Angles (degrees)');
title('Simulation Results');