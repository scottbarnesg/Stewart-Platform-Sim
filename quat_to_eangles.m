% quat_to_eangles
% 
% Input a 4 element quaternion array in the form [qw qx qy qz], output is a
% 3 element array with Euler angles about the x, y, and z axes.
% By: Scott Barnes & Chris Poole
% 
function [ eangles ] = quat_to_eangles(quat)
quat_rp = [quat(2), quat(3), quat(4), quat(1)];
quat_y = [quat(6), quat(7), quat(8), quat(5)];

% Now [qx qy qz qw]

alpha = atan2(2*(quat_rp(4)*quat_rp(1)-quat_rp(2)*quat_rp(3)), 1-2*(quat_rp(1)^2+quat_rp(3)^2));
gamma = asin(2*(quat_rp(1)*quat_rp(2)-quat_rp(3)*quat_rp(4)));
beta = atan2(2*(quat_y(2)*quat_y(4)-quat_y(1)*quat_y(3)),1-2*(quat_y(2)^2+quat_y(3)^2));

eangles = [alpha; beta; gamma];

end

