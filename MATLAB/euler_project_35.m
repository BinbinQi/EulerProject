clear;clc;close all
t0 = 0;
for p = primes(1e6)
    n = ceil(log10(p+1));
    m = mod(floor(p./10.^(n-1:-1:0)),10);
    if all(isprime(10.^(n-1:-1:0)*hankel(m,circshift(m,1))))
        t0 = t0 + 1;
    end
end
