clear;clc;close all
A = primes(1e6);
t = 22;
F = 0;
T = 0;
tic
while t < 600
    C = movsum(A,t,"Endpoints", "discard");
    N = C(ismembc(C,A)&C<1e6);
    if ~isempty(N) 
        F = N(1);
        T = t;
    end
    t = t + 1;
end
toc