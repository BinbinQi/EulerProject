import math
import operator
def gcd(a,b):
    while b!=0:
        a,b = b,a%b
    return a
    
t = 20;
for i in range(19,1,-1):
    if t%i!=0:
        t = t*i/gcd(t,i)
    
print(t)
