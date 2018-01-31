%rot_x
%generates rotation matrix about x axis
%Scott Barnes
%MAe 3184
function R = rot_x(theta)
    R = [1 0 0; 0 cos(theta) -sin(theta); 0 sin(theta) cos(theta)];
end