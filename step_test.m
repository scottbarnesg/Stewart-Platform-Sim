close all
clear all
clc

roll = 0;
pitch = 0;
yaw = 0; % Should always be zero

R = rot_x(-pitch)*rot_y(yaw)*rot_z(roll);

servo_angles = [0, -pi/2, pi/2, -pi/2, pi/2, -pi/2]; % initial angles
old_sim_time = 0;
run_sim = true;

set_param('PlatformAssem', 'SimulationCommand', 'stop'); % clears old sim
set_param('PlatformAssem', 'SimulationCommand', 'start'); % starts sim
set_param('PlatformAssem', 'SimulationCommand', 'pause'); % immediately pauses

while(run_sim == true)
    current_sim_time = get_param('PlatformAssem','SimulationTime');
    %servo_angles(1) = pi/2*sin(10*current_sim_time)+pi/2; % just a test function
    %if ((current_sim_time - old_sim_time) > 0.05) % only update model when necessary
        %set_param('PlatformAssem', 'SimulationCommand', 'update'); %
        %updates values ** DONT USE THIS ITS SO SLOW
            for num = 1:6
                path = strcat('PlatformAssem/angle',int2str(num));
                set_param(path, 'Value', num2str(servo_angles(num)));
            end
        old_sim_time = current_sim_time;
   % end
    set_param('PlatformAssem', 'SimulationCommand', 'step'); % steps forward by single time step (determined by solver)
    if(current_sim_time >= 5.0)
        run_sim = false;
        break;
    end
end