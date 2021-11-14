clear;clc;close all
t = 286;
while true
    Tn = t*(t+1)/2;
    b = (1:t).*(3*(1:t)-1)/2;
    c = (1:t).*(2*(1:t)-1);
    if ismember(Tn,b) && ismember(Tn,c)
        break
    end
    t = t + 1;
end
Tn