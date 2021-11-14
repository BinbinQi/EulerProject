clear;clc;close all
data = cellfun(@(x)sum(x-'@'),regexp(fileread("p042_words.txt"),'\w+','match'));
a = sqrt(data*8+1);
nnz(data(a==floor(a)))