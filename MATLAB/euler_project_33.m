clear;clc;close all
[x,y] = deal(1);
f = @(x,y)str2double(setdiff(int2str(x), ...
    int2str(y)))./str2double(setdiff(int2str(y),int2str(x)));
for i = 10 : 99
    for j = i + 1 : 99
        a = int2str(i);
        b = int2str(j);
        c = intersect(a,b); 
        d = str2double(setdiff(a,c));
        e = str2double(setdiff(b,c));
        if length(c)== 1 && abs(i/j-d/e)<1e-8 && mod(j,10) ~= 0
            x = x * d;
            y = y * e;
        end
    end
end
z = y/gcd(x,y);
