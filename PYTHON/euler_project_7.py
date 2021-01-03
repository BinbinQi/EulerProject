primes = [2]
t = 2
while len(primes) <= 10000:
    t += 1
    isprime = True
    for i in primes:
        if t%i == 0:
            isprime = False
            break
    
    if not(isprime):
        continue
    
    primes.append(t)
 
print(primes[-1])
