clear;clc;close all
c = 1;
for i = 1 : 9999
    a = sprintf('%d',i.*(1:9));
    c = max(c,str2double(setdiff(unique(a(1:9),'stable'),'0','stable')));
end