import math
def splitSD(x):
    x = str(x)
    a = 0
    b = 0
    flip = True
    for i in range(len(x)):
        m = len(x) - i - 1
        if int(x[i])/2 % 1 != 0:
            flip = not flip 
        if flip:
            a += math.ceil(int(x[i])/2) * 10**m
            b += math.floor(int(x[i])/2) * 10**m
        else:
            a += math.floor(int(x[i])/2) * 10**m
            b += math.ceil(int(x[i])/2) * 10**m
    print(str(a) + " " + str(b))

t = int(input())
for _ in range(t):
    k = int(input())
    splitSD(k)

