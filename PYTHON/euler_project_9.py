s = [a*b*(1000-a-b) for a in range(1,500) for b in range(a+1,500) if a*a + b*b == (1000-a-b)**2]
print(s)
