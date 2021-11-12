clear;clc;close all
coins = [200,100,50,20,10,5,2,1];
money = 200;
% y = change(money,coins);
y = change2(money,coins);
function out = change2(money, coins)
ways=[1,zeros(1,money)] ;
for j = 1:length(coins)
    for K=coins(j)+1:money+1
        ways(K) = ways(K) + ways(K-coins(j)) ;
    end
end
out = ways(money+1);
end


function y = change(x,c)
if isequal(c,1)
    y = 1;
elseif x<0
    y = 0;
else
    % 分为不用c(1)和用c(1)
    y = change(x,c(2:end)) + change(x-c(1),c);
end
end