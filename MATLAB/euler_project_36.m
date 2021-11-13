clear;clc;close all
t = 0;
for i = 1 : 1e6
    n = ceil(log10(i+1));
    m = mod(floor(i./10.^(n-1:-1:0)),10);
    p = dec2bin(i);
    if isequal(flip(m),m) && isequal(p, flip(p))
        t = t + i;
    end
end