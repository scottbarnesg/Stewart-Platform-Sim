% Reset Simulation
servo_angles = [pi/2; -pi/2; pi/2; -pi/2; pi/2; -pi/2];
for num = 1:6
    path = strcat('PlatformAssem/angle',int2str(num));
    set_param(path, 'Value', num2str(servo_angles(num)));
end
set_param('PlatformAssem', 'SimulationCommand', 'step');
set_param('PlatformAssem', 'SimulationCommand', 'stop');