clear;clc;close all
c = [3 3 5 4 4 3 5 5 4 3 6 6 8 8 7 7 9 8 8 6];
c(30:10:90) = [6 5 5 5 7 6 6];
c([100,1000]) = [10,11];
for i = 21 : 1000
    if c(i) > 0
        continue
    end
    if i < 100
        i1 = mod(i,10);
        i2 = i - i1;
        c(i) = c(i1) + c(i2);
    else 
        i1 = mod(i,100);
        i2 = floor(i/100);
        if i1 == 0
            c(i) = c(i2) + 7;
        else
            c(i) = c(i1) + c(i2) + 10;
        end
    end
end