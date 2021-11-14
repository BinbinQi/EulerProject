clear;clc;close all
t = 4;
f = @(x)length(unique(factor(x)));
while true
    if isprime(t)
        t = t + 1;
        continue
    end
    if f(t) ~= 4
        t = t + 1;
        continue
    end
    if f(t+1) ~= 4
        t = t + 2;
        continue
    end
    if f(t+2) ~= 4
        t = t + 3;
        continue
    end
    if f(t+3) ~= 4
        t = t + 4;
        continue
    end
    break
end