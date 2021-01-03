import sys
 
def readfile(filename):
    res = []
    with open(filename,'r') as f:
        for line in f.readlines():
            linestr = line.strip()
            linestrlist = linestr.split(" ")
            res.append([int(i) for i in linestrlist])
    return res
 
res = readfile("data11.txt")
 
ss = 1
for i in range(len(res)-3):
    for j in range(len(res[0])-3):
        s1, s2, s3, s4 = 1, 1, 1, 1
        for k in range(4):
            s1 *= res[i][j+k]
            s2 *= res[i+k][j]
            s3 *= res[i+k][j+k]
            s4 *= res[i+3-k][j+k]
        s = max([s1,s2,s3,s4])
        if s>ss:
            ss = s
 
print(ss)
