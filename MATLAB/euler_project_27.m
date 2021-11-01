clear;clc;close all
p = -1;
for i = -999 : 999
    for j = primes(1000)
        m = myfun(i,j);
        if m > p
            p = m;
            a = i;
            b = j;
        end
    end
end
disp(a*b)

function t = myfun(a,b)
t = 0;
while true
    d = polyval([1,a,b], t);
    if d<2 || ~isprime(d)
        break
    else
        t = t + 1;
    end
end
end