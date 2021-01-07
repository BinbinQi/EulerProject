import sys
import math

t = 1
while True:
    s = t*(t+1)//2
    if sum([1 for i in range(1,math.floor(math.sqrt(s))) if s%i==0]) > 250:
        break
    t += 1


 
print(s)

