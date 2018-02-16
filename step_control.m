clc; clear; close all;
%% Set Initial Parameters
t_max = 0.7;
g = -9.80665; %gravity
sensor_delay = 0.00; %seconds
noise_mag = mag2db(0.00); %converts magnitude to dB

% Define Functions for Dynamic Base Position and Orientation
base_pxf = @(t) t; %30*10^-3; % 10*10^-3; % -(t+1)^2;
base_pyf = @(t) t; %20*10^-3; % (t+1)^2;
base_pzf = @(t) t; %10*10^-3;  % (t+2)^2; % (X-Direction)
base_qxf = @(t) 10*sin(2*pi*t); %in degrees
base_qyf = @(t) 0; % 10*sin(2*pi*t);
base_qzf = @(t) 0;

% Set Initial Base Position and Orientation
base_px = base_pxf(0);
base_py = base_pyf(0);
base_pz = base_pzf(0);
base_qx = deg2rad(base_qxf(0)); % Gamma - roll
base_qy = deg2rad(base_qyf(0)); % Alpha - pitch 
base_qz = deg2rad(base_qzf(0)); % Beta - yaw

set_param('PlatformAssem/base_px','Value',num2str(base_px))
set_param('PlatformAssem/base_py','Value',num2str(base_py))
set_param('PlatformAssem/base_pz','Value',num2str(base_pz))
set_param('PlatformAssem/base_qx','Value',num2str(base_qx))
set_param('PlatformAssem/base_qy','Value',num2str(base_qz))
set_param('PlatformAssem/base_qz','Value',num2str(base_qy))

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
error_data = []; % Initialize Empty Error Array

%% Run Simulation
while(run_sim == true)
    % Get Current Simulation Time
    current_sim_time = get_param('PlatformAssem','SimulationTime');
    
    % Set Variable Base Position and Orientation From Definitions
    base_px = base_pxf(current_sim_time);
    base_py = base_pyf(current_sim_time);
    base_pz = base_pzf(current_sim_time);
    base_qx = deg2rad(base_qxf(current_sim_time)); % Gamma - roll
    base_qy = deg2rad(base_qyf(current_sim_time)); % Alpha - pitch
    base_qz = deg2rad(base_qzf(current_sim_time)); % Beta - yaw
    
    % Apply Base Translation and Rotation
    set_param('PlatformAssem/base_px','Value',num2str(base_px))
    set_param('PlatformAssem/base_py','Value',num2str(base_py))
    set_param('PlatformAssem/base_pz','Value',num2str(base_pz))
    set_param('PlatformAssem/base_qx','Value',num2str(base_qx))
    set_param('PlatformAssem/base_qy','Value',num2str(base_qz))
    set_param('PlatformAssem/base_qz','Value',num2str(base_qy)) 
    
    % Update Actuators
    for num = 1:6
        path = strcat('PlatformAssem/angle',int2str(num));
        set_param(path, 'Value', num2str(servo_angles(num)));
    end
    % Get Platform State
    quat_plat_state = platform_orientation.signals.values(length(platform_orientation.time), :);
    eul_plat_state = quat_to_eangles(quat_plat_state) + wgn(3, 1, noise_mag);
    trans_plat_state = platform_translation_rel.signals.values(length(platform_translation_rel.time), :) + wgn(1, 3, noise_mag) - platform_translation_rel.signals.values(1, :);
    actuator_states = motor_states.signals.values(length(platform_orientation.time), :)' + wgn(6, 1, noise_mag);   
    accel_plat_state = platform_acceleration.signals.values(length(platform_acceleration.time), :)/1000 + wgn(1, 3, noise_mag);
    % Calculate Controller Input
    % servo_angles = controller_v0(eul_plat_state, actuator_states, trans_plat_state);
    if length(platform_orientation.time) > 1
        dt = platform_orientation.time(length(platform_orientation.time))-platform_orientation.time(length(platform_orientation.time)-1);
    else
        dt = platform_orientation.time(1);
    end
    % [servo_angles, error_data] = controller_v1(eul_plat_state, actuator_states, trans_plat_state, error_data, dt);
    [servo_angles, error_data] = controller_v2(eul_plat_state, actuator_states, trans_plat_state, accel_plat_state, error_data, dt);
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
clear alpha beta gamma x y z;
for i = 1:size(platform_orientation.time, 1)
    R_m = quat_to_rot(platform_orientation.signals.values(i, :));
    eangles = quat_to_eangles(platform_orientation.signals.values(i, :));
    alpha(i) = eangles(1)*180/pi;
    beta(i) = eangles(2)*180/pi;
    gamma(i) = eangles(3)*180/pi;
    x(i) = 1000*(platform_translation_rel.signals.values(i, 1) - platform_translation_rel.signals.values(1, 1));
    y(i) = 1000*(platform_translation_rel.signals.values(i, 2) - platform_translation_rel.signals.values(1, 2));
    z(i) = 1000*(platform_translation_rel.signals.values(i, 3) - platform_translation_rel.signals.values(1, 3));
    ax(i) = platform_acceleration.signals.values(i, 1);
    ay(i) = platform_acceleration.signals.values(i, 2);
    az(i) = platform_acceleration.signals.values(i, 3);
end
figure;
subplot(3, 1, 1);
plot(platform_orientation.time, alpha, 'r', platform_orientation.time, beta, 'b', platform_orientation.time, gamma, 'g', platform_orientation.time, base_qxf(platform_orientation.time), '--r', platform_orientation.time, base_qyf(platform_orientation.time), '--b', platform_orientation.time, base_qzf(platform_orientation.time), '--g');
legend('Alpha','Beta','Gamma', 'Roll', 'Pitch', 'Yaw');
xlabel('Time (s)');
ylabel('Angles (degrees)');
title('Rotation')
subplot(3, 1, 2);
plot(platform_orientation.time, x, platform_orientation.time, y, platform_orientation.time, z);
legend('X', 'Y', 'Z');
xlabel('Time (s)');
ylabel('Displacement (mm)');
title('Translation');
subplot(3, 1, 3);
plot(platform_orientation.time, ax, platform_orientation.time, ay, platform_orientation.time, az);
legend('X', 'Y', 'Z');
xlabel('Time (s)');
ylabel('Acceleration (m/s^2)');
title('Acceleration');