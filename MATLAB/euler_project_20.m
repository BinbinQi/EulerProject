clear;clc;close all
import java.math.BigInteger
a = BigInteger("1");
for i = 1 : 100
    a = a.multiply(BigInteger(int2str(i)));
end
sum(char(a)-'0')