clear;clc;close all
data = myfun(readmatrix("data18.txt", Delimiter=" ",NumHeaderLines=0));
function x = myfun(x)
if height(x) > 1
    x = x(1) + max(myfun(x(2:end,:)), myfun(x(2:end,2:end)));
else
    x = x(1);
end
end

1 Jan 1901 to 31 Dec 2000