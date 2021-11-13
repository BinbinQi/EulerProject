clear;clc;close all
c = factorial(0:9);
d = 0;
for i = 11 : 99999
    n = ceil(log10(i+1));
    m = mod(floor(i./10.^(0:n-1)),10);
    p = sum(c(m+1));
    if p == i
        d = d + i;
    end
end