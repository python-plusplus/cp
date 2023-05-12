import math
a, b, n = map(int, input().split())
ass = str(a)
bss = str(b)
final = 0
s = a * n
flag = False
for i in range(n + 1):
    flag = False
    m = str(s)
    for j in range(len(m) - 1, len(m) - 3 , -1):
        if m[j] != ass and m[j] != bss:
            flag = True
            break
    if not flag:
        final += math.comb(n, i)
    if i != n:
        s -= a
        s += b

print(final % 1000000007)
