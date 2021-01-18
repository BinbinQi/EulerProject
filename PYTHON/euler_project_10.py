import math
primes = [2]
t = 1
while t <= 2e6:
    t += 2
    isprime = True
    for i in primes:           
        if t%i == 0:
            isprime = False
            break
        if i > math.sqrt(t):
            isprime = True
            break
    if not(isprime):
        continue
    #print(t)
    primes.append(t)
 
print(sum(primes))
