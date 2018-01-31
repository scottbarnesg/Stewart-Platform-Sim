function theta = controller_v0(eangles, theta)
    % Time Step
    dt=0.001;
    % Controller Weights
    A = 250*ones(1, 6); % Implementation Weights (Verified)
    % A = zeros(1, 6); % Dummy Weights (for testing)
    B = 250*ones(1, 6); % Implementation Weights (Verified)
    % B = zeros(1, 6); % Dummy Weights (for testing)
    C = 50*ones(1, 6); % Implementation Weights (In Testing)
    % C = zeros(1, 6); % Dummy Weights (for testing)
    D = 100*ones(1, 6); % Implementation Weights (Not Yet Tested)
    % Velocity Calculation
    d_theta = -[A(1)*-sin(eangles(1))+B(1)*sin(eangles(3))-C(1)*sin(eangles(2));
                A(2)*-sin(eangles(1))+B(2)*-sin(eangles(3))-C(2)*sin(eangles(2));
                A(3)*-sin(eangles(1))+B(2)*-sin(eangles(3))-C(3)*sin(eangles(2));
                A(4)*sin(eangles(1))+B(2)*sin(eangles(3))-C(4)*sin(eangles(2));
                A(5)*sin(eangles(1))+B(2)*-sin(eangles(3))-C(5)*sin(eangles(2));
                A(6)*-sin(eangles(1))+B(2)*sin(eangles(3))-C(6)*sin(eangles(2))];
    theta = theta + d_theta*dt;
end