close all
clear all
clc

d = 0:0.1:10; % meters
max_height = 1.5; 
max_slope = 15; % degrees

y = max_height*rand([1,length(d)]);
f = fit(d',y','smoothingspline','SmoothingParam',0.9);
y_new = feval(f,d);

figure
hold on
plot(d,y)
plot(d,y_new)
ylim([0 max_height])
axis equal
xlabel('Distance')
ylabel('Height')