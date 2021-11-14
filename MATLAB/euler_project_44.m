clear;clc;close all
P = @(n)n.*(3*n-1)/2;
a = 1 : 4500;
Pa = P(a);
A = Pa(1:3000);
B = A + A';
C = abs(A - A');
min(C(ismember(B,Pa) & ismember(C,Pa)))
