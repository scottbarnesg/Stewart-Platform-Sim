function [ eangles ] = quat_to_eangles(quat)
%
% function [ eangles ] = quat_to_eangles(quat)
%
% Input a 4 element quaternion array in the form [qx qy qz qw], output is a
% 3 element array with Euler angles about the x, y, and z axes.
q = [quat(4), quat(1), quat(2), quat(3)];

alpha = atan2(2*(quat(4)*quat(1)-quat(2)*quat(3)), 1-2*(quat(1)^2+quat(3)^2));
gamma = asin(2*(quat(1)*quat(2)-quat(3)*quat(4)));
beta = atan2(2*(quat(2)*quat(4)-quat(1)*quat(3)),1-2*(quat(2)^2+quat(3)^2));

eangles = [alpha; beta; gamma];

end

