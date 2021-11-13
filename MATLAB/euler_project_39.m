clear;clc;close all
[a, b] = meshgrid(1:500);
c = sqrt(a.^2 + b.^2);
idx = c == floor(c) & (a+b+c)< 1000;
mode(a(idx)+b(idx)+c(idx))

