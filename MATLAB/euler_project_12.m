clear;clc;close all
sum(1:find(arrayfun(@(i)prod(accumarray(factor(sum(1:i))',1)+1),...
    1:1.5e4)>500,1))
