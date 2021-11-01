clear;clc;close all
a = spiral(1001);
sum(diag(a))+sum(diag(flip(a)))-1