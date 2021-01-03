import math
import operator
s = 0
for k in [i*j for i in range(100,999) for j in range(100,999)]:
    m = [k//10**i%10 for i in range(0,len(str(k)))]
    if k>s and operator.eq(m,list(reversed(m))):
        s = k
print(s)
