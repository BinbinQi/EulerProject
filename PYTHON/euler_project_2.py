a,b,c = 1,1,0
while b < 4e6:
    a,b = b,a+b
    if b%2==0:
        c += b
print(c)
