clear;clc;close all
a = datenum("1 Jan 1901"):datenum("31 Dec 2000"); 
nnz(day(a)==1 & weekday(a) == 1)