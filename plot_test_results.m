close all
clear all
clc

filename = '10_Mar_2018_16_06_38.mat';
load(filename)

roll = plat_state(:,1);
pitch = plat_state(:,2);
yaw = plat_state(:,3);
x = plat_state(:,4);
y = plat_state(:,5);
z = plat_state(:,6);

figure
subplot(3,1,1)
hold on
plot(rad2deg(roll))
xlabel('Count')
ylabel('Roll (deg)')
subplot(3,1,2)
hold on
plot(rad2deg(pitch))
xlabel('Count')
ylabel('Pitch (deg)')
subplot(3,1,3)
hold on
plot(rad2deg(yaw))
xlabel('Count')
ylabel('Yaw (deg)')

figure
subplot(3,1,1)
hold on
plot(x)
xlabel('Count')
ylabel('x')
subplot(3,1,2)
hold on
plot(y)
xlabel('Count')
ylabel('y')
subplot(3,1,3)
hold on
plot(z)
xlabel('Count')
ylabel('z')
