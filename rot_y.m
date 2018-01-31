%rot_y
%generates rotation matrix about y axis
%Scott Barnes
%MAe 3184
function R = rot_y(theta)
    R = [cos(theta) 0 sin(theta); 0 1 0; -sin(theta) 0 cos(theta)];
end