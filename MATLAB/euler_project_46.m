clear;clc;close all
t = 9;
while true
    if isprime(t)
        t = t + 2;
        continue
    end
    a = sqrt((t - primes(t))/2);
    if ~any(floor(a)==a)
        break
    end
    t = t + 2;
end