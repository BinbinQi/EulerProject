clear;clc;close all
b = 1:28123;
a = b(b < arrayfun(@myfun, b));
c = b(arrayfun(@(x)all(~ismember(x-a,a)),b));
d = sum(c);
function y = myfun(x)
f = factor(x);
q = unique(f);
s = sum(f' == q,1);
y = prod((1-q.^(1+s))./(1-q))-x;
end