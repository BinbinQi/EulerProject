clear;clc;close all
a = sym(1:1000);
b = char(sum(a.^a));
b(end-9:end)