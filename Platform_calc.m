c = pi/2;
th1 = c;
th2 = -c;
th3 = c;
th4 = -c;
th5 = c;
th6 = -c;

a1 = -pi/6;
a2 = -pi/6;
a3 = pi/6;
a4 = -pi/6;
a5 = pi/6;
a6 = -pi/6;

b1 = th1;
b2 = th2;
b3 = th3;
b4 = th4;
b5 = th5;
b6 = th6;

roll = 0;
pitch = 0;
yaw = 0; % Should always be zero

R = rot_x(-pitch)*rot_y(yaw)*rot_z(roll);