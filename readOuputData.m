% Analyze Results
clear alpha beta gamma;
close;
for i = 1:size(platform_orientation.time, 1)
    R_m = quat_to_rot(platform_orientation.signals.values(i, :));
    eangles = quat_to_eangles(platform_orientation.signals.values(i, :));
    alpha(i) = eangles(1)*180/pi;
    beta(i) = eangles(2)*180/pi;
    gamma(i) = eangles(3)*180/pi;
    x(i) = 1000*(platform_translation.signals.values(i, 1)-platform_translation.signals.values(1, 1));
    y(i) = 1000*(platform_translation.signals.values(i, 2)-platform_translation.signals.values(1, 2));
end
plot(platform_orientation.time, alpha, platform_orientation.time, beta, platform_orientation.time, gamma, platform_orientation.time, x, platform_orientation.time, y);
legend('Alpha','Beta','Gamma', 'X', 'Y');
xlabel('Time (s)');
ylabel('Angles (degrees)');
title('Simulation Results');