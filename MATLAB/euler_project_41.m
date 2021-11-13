clear;clc;close all
for i = 9 : -1 : 1
    a = perms(1:i)*(10.^(0:i-1)');
    b = isprime(a);
    if any(b)
        c = max(a(b));
        break
    end
end