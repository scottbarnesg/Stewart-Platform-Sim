% Stewart Platform Controller Version 1.0
% Add Integral Control
% WARNING: Unstable
function [theta, error_data] = controller_v1(eangles, theta, translation, error_data)
    % Time Step
    dt=0.001;
    % Controller Weights
    A = 250*ones(1, 6); % Implementation Weights (Verified)
    % A = zeros(1, 6); % Dummy Weights (for testing)
    B = 250*ones(1, 6); % Implementation Weights (Verified)
    % B = zeros(1, 6); % Dummy Weights (for testing)
    C = 100*ones(1, 6); % Implementation Weights (In Testing)
    % C = zeros(1, 6); % Dummy Weights (for testing)
    D = 500*[1, 1, 0, 0, 0, 0]; % Implementation Weights (Not Yet Tested)
    % D = zeros(1, 6);
    E = 200*[0, 0, 1, 1, 1, 1];
    % E = zeros(1, 6);
    % F = zeros(1, 6);
    F = 200*ones(1, 6);
    
    % Velocity Calculations
    d_theta = [A(1)*sin(eangles(3))+B(1)*sin(eangles(1))-C(1)*sin(eangles(2))+D(1)*translation(1)+E(1)*translation(2)-F(1)*translation(3);
                A(2)*sin(eangles(3))+B(2)*-sin(eangles(1))-C(2)*sin(eangles(2))+D(2)*translation(1)+E(2)*translation(2)-F(1)*translation(3);
                A(3)*sin(eangles(3))+B(2)*-sin(eangles(1))-C(3)*sin(eangles(2))+D(3)*translation(1)+E(3)*translation(2)-F(1)*translation(3);
                A(4)*-sin(eangles(3))+B(2)*sin(eangles(1))-C(4)*sin(eangles(2))+D(4)*translation(1)+E(4)*translation(2)-F(1)*translation(3);
                A(5)*-sin(eangles(3))+B(2)*-sin(eangles(1))-C(5)*sin(eangles(2))+D(5)*translation(1)-E(5)*translation(2)-F(1)*translation(3);
                A(6)*sin(eangles(3))+B(2)*sin(eangles(1))-C(6)*sin(eangles(2))+D(6)*translation(1)-E(6)*translation(2)]-F(1)*translation(3);
    % Integral Control Calculation
    error_data = [error_data, [eangles; translation']];
    % disp(trapz(error_data'))
    d_theta = d_theta-trapz(error_data')';
    % Update Motor Angles
    theta = theta + d_theta*dt;
end