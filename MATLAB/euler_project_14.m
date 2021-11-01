clear;clc;close all
n = 1e6;
c = zeros(1e6,1);
c(1) = 1;
for i = 2 : n
    [t,s] = deal(0,i);
    while s >= i
        if mod(s,2) == 0
            s = s/2;
        else
            s = s*3+1;
        end
        t = t + 1;
    end
    c(i) = t + c(s);
end
[~,idx] = max(c)