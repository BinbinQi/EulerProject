clear;clc;close all
d = 1;
for i = primes(1000)
    c = length(regexp(char(vpa(1/i,10000)),'(\d{4,}?)(\1)','match','once'))/2;
    if c > d
        d = c;  
        i
    end
end

