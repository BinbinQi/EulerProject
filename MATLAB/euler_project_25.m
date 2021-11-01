clear;clc;close all
t = 1;
while true
    if length(char(fibonacci(sym(t)))) >= 1000
        break
    end
    t = t + 1;
end