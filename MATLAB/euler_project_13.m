clear;clc;close all
data = char(sum(cellfun(@sym,regexp(fileread("data13.txt"),...
    '\d+','match'))));
data(1:10)
