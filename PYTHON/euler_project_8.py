import sys
f = open(r"data8.txt")
lines = f.readlines()
alist = []
m = 13
for line in lines:
    alist.extend(line)
maxv = 0
t = 0
while True:
    if '\n' in alist:
        alist.remove('\n')
    else:
        break
 
while t+m-1<len(alist):
    b = alist[t:t+m]
    if '0' in b:
        blist = [i for i,x in enumerate(b) if x=='0']
        t += 1 + blist[-1]
    else:
        s=1
        for i in b:
            s *= int(i)
        maxv = max(maxv, s)
        t+=1
print(maxv)
