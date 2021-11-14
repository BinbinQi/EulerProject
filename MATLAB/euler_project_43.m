clear;clc;close all
data = perms(0:9);
p = primes(18);
for i = 2 : 8
    data(mod(data(:,i:i+2)*10.^(2:-1:0)',p(i-1)) ~= 0,:)=[];
end
format longG
sum(data*10.^(9:-1:0)')