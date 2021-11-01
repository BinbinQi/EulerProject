clear;clc;close all
c = [];
for i = 2 : 1e6
    n = ceil(log10(i+1));
    if sum(mod(floor(i./10.^(0:n-1)),10).^5)==i
        c = [c,i];
    end
end
sum(c)