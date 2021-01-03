import math
 
a = 600851475143 
def isprime(x):
    for i in range(2,math.floor(math.sqrt(x))):
        if x%i == 0:
            return False
    return True
 
t = math.floor(math.sqrt(a));
while not(isprime(t)) or a%t != 0:
    t-=1
    
print(t)
