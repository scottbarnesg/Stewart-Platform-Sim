clc; clear; close all;
%% Set Initial Parameters

% Set Angle Ranges
min_angle = 110;
max_angle = 170;
d_angle = 10;

g = 0;
sensor_delay = 0;
t_max = 10;

% Define Functions for Dynamic Base Position and Orientation
base_pxf = @(t) 0; % Left/Right
base_pyf = @(t) 0; % Up/Down
base_pzf = @(t) 0; %(t+1)^2; % Forward/Back
base_qxf = @(t) 0; %20*sin(2*pi*t); %in degrees
base_qyf = @(t) 0;
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
init_angle = deg2rad(min_angle);
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
pause(1);
count = 0;
tic; % Start Timer
error_data = []; % Initialize Empty Error Array
delay_check = 0;
delay_ind = 1;

servo_state_theoretical(1, :) = servo_angles;
servo_state_actual(1, :) = servo_angles;

%% Run Simulation
for a = min_angle:d_angle:max_angle
    for b = min_angle:d_angle:max_angle
        for c = min_angle:d_angle:max_angle
            for d = min_angle:d_angle:max_angle
                for e = min_angle:d_angle:max_angle
                    for f = min_angle:d_angle:max_angle
                        % Increment Counter
                        count = count + 1;
                        
                        % Set Servo Angles
                        servo_angles = [a, -b, c, -d, e, -f]
                        for num = 1:6
                            path = strcat('PlatformAssem/angle',int2str(num));
                            set_param(path, 'Value', num2str(deg2rad(servo_angles(num))));
                        end
                        tic;
                        % Step Simulation Forward
                        while (max(abs(servo_angles-rad2deg(motor_states.signals.values(length(platform_orientation.time), :)))) > 0.1)
                            set_param('PlatformAssem', 'SimulationCommand', 'step');
                            if toc > t_max
                                break;
                            end
                        end
                        set_param('PlatformAssem', 'SimulationCommand', 'pause');
                        % Check for Timeout
                        if (toc > t_max)
                            disp('Resetting Simulation');
                            % set_param('PlatformAssem', 'SimulationCommand', 'stop');
                            % disp('Stopped Simulation');
                            %pause(1);
                            servo_angles = [100, -100, 100, -100, 100, -100]
                            for num = 1:6
                                path = strcat('PlatformAssem/angle',int2str(num));
                                set_param(path, 'Value', num2str(deg2rad(servo_angles(num))));
                            end
                            set_param('PlatformAssem', 'SimulationCommand', 'start');
                            disp('Starting Simulation');
                            %pause(1);
                        end
                        
                        % Store Servo Angles
                        servo_state_theoretical(count, :) = servo_angles;
                        servo_state_actual(count, :) = rad2deg(motor_states.signals.values(length(platform_orientation.time), :)');

                        % Update Platform State
                        quat_plat_state = platform_orientation.signals.values(length(platform_orientation.time), :);
                        eul_plat_state = quat_to_eangles(quat_plat_state);
                        trans_plat_state = platform_translation_rel.signals.values(length(platform_translation_rel.time), :);
                        % Store Platform State
                        plat_state(count, :) = [eul_plat_state', trans_plat_state];
                    end
                end
            end
        end
    end
end
toc

filename = datestr(datetime('now'));
filename = strrep(filename,' ','_');
filename = strrep(filename,':','_');
filename = strrep(filename,'-','_');
save(filename);

