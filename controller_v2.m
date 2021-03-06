% Stewart Platform Controller Version 2.0
% PI Position & Rotation Control
% P Acceleration Control
% Verified

function [theta, error_data] = controller_v2(eangles, theta, translation, acceleration, error_data, dt, t)
    % Controller Weights
    A = 250*ones(1, 6);
    % A = zeros(1, 6);
    B = 250*ones(1, 6);
    % B = zeros(1, 6);
    C = 100*ones(1, 6);
    % C = zeros(1, 6);
    D = -500*[1, 1, 0, 0, 0, 0];
    % D = zeros(1, 6);
    E = 500*[0, 0, 1, 1, 1, 1];
    % E = zeros(1, 6);
    F = 200*ones(1, 6);
    % F = zeros(1, 6);
    G = 0.25;
    H = 20;
    
    % Proportional Calculations
    d_theta = [A(1)*sin(eangles(3))+B(1)*sin(eangles(1))-C(1)*sin(eangles(2))+D(1)*translation(1)+E(1)*translation(2)-F(1)*translation(3);
                A(2)*sin(eangles(3))+B(2)*-sin(eangles(1))-C(2)*sin(eangles(2))+D(2)*translation(1)+E(2)*translation(2)+F(2)*translation(3);
                A(3)*sin(eangles(3))+B(3)*-sin(eangles(1))-C(3)*sin(eangles(2))+D(3)*translation(1)+E(3)*translation(2)-F(3)*translation(3);
                A(4)*-sin(eangles(3))+B(4)*sin(eangles(1))-C(4)*sin(eangles(2))+D(4)*translation(1)+E(4)*translation(2)+F(4)*translation(3);
                A(5)*-sin(eangles(3))+B(5)*-sin(eangles(1))-C(5)*sin(eangles(2))+D(5)*translation(1)-E(5)*translation(2)-F(5)*translation(3);
                A(6)*sin(eangles(3))+B(6)*sin(eangles(1))-C(6)*sin(eangles(2))+D(6)*translation(1)-E(6)*translation(2)+F(6)*translation(3)];
   
    % Integral Control Calculation
    error_t = [sin(eangles(3)); sin(eangles(1)); sin(eangles(2)); translation(1); translation(2); translation(3)];
    error_data = [0.9*error_data, error_t];
    % error_data = [0.9*error_data, [eangles; translation']];
    error_sum = sum(error_data');
    if length(error_sum) == 6
        d_theta = d_theta +...
            G*[A(1)*error_sum(1)+B(1)*error_sum(2)-C(1)*error_sum(3)+D(1)*error_sum(4)+E(1)*error_sum(5)-F(1)*error_sum(6);
            A(2)*error_sum(1)+B(2)*-error_sum(2)-C(2)*error_sum(3)+D(2)*error_sum(4)+E(2)*error_sum(5)+F(2)*error_sum(6);
            A(3)*error_sum(1)+B(3)*-error_sum(2)-C(3)*error_sum(3)+D(3)*error_sum(4)+E(3)*error_sum(5)-F(3)*error_sum(6);
            A(4)*-error_sum(1)+B(4)*error_sum(2)-C(4)*error_sum(3)+D(4)*error_sum(4)+E(4)*error_sum(5)+F(4)*error_sum(6);
            A(5)*-error_sum(1)+B(5)*-error_sum(2)-C(5)*error_sum(3)+D(5)*error_sum(4)-E(5)*error_sum(5)-F(5)*error_sum(6);
            A(6)*error_sum(1)+B(6)*error_sum(2)-C(6)*error_sum(3)+D(6)*error_sum(4)-E(6)*error_sum(5)+F(6)*error_sum(6)];
    end
    
    % Acceleration Control
    if t > 0.05
        d_theta = d_theta +...
            H*[-0.25*acceleration(3)-acceleration(2); 
            0.25*acceleration(3)+acceleration(2);
            acceleration(3)-acceleration(2);
            acceleration(3)+acceleration(2);
            -acceleration(3)-acceleration(2);
            -acceleration(3)+acceleration(2)];
    end
    % Update Motor Angles
    theta = theta + d_theta*dt;
end