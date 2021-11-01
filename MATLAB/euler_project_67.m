clear;clc;close all
data = readmatrix("p067_triangle", Delimiter=" ",NumHeaderLines=0);
for i = height(data)-1 : -1 : 1
    data(i,:) = movmax(data(i+1,:),[0 1]) + data(i,:);
end
data(1)