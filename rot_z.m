%rot_z
%generates rotation matrix about z axis
%Scott Barnes
%MAe 3184
function R = rot_z(theta)
    R = [cos(theta) -sin(theta) 0; sin(theta) cos(theta) 0; 0 0 1];
end