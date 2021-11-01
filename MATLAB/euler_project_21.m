clear;clc;close all
a = 1:10000;
b = a*~mod(a,a')-a; 
c = sum(find(arrayfun(@(a)b(b(a))==a&b(a)~=a,a,...
'ErrorHandler',@(varargin)false)));