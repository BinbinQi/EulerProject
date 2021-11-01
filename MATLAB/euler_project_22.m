clear;clc;close all
data = fileread("p022_names.txt");
name = sort(regexp(data, "\w+","match"));
(1:length(name))*cellfun(@(x)sum(x-64),name)'
