clear;clc;close all
t = 0;
s = 0;
for p = primes(1e6)    
    n = ceil(log10(p+1));
    if p > 10 && all(isprime(floor(p./10.^(1:n-1)))) && all(isprime(mod(p,10.^(1:n-1))))
        t = t + 1;
        s = s + p;
        if t >= 11
            break
        end
    end        
end