import math
n, k = map(int, input().split())

spidey = (2*((k//1.5)+1)+ 1)**2
taxi = n**2 + (n+1)**2

print(taxi)
print(spidey)


