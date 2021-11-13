clear;clc;close all;

n = 9;
c = 0;
for i = 1 : 20000
    s = 1:ceil(sqrt(i));
    for j = s(mod(i,s)==0)
        if isequal(sprintf('%d',1:n),sort(sprintf('%d',j,i/j,i)))
            i
            c = c  + i;
            break;
        end
    end    
end
