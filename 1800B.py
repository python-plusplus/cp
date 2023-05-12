import math
t = int(input())
for _ in range(t):
    m = {}
    a, k = map(int, input().split())
    s = input()
    i = 0
    total = 0
    for j in s:
        if j.islower():
            c = j.upper()
        else:
            c = j.lower()  

        if j in m and m[j] != 0:
            m[j] += 1
            if m[j] % 2 == 0:
                i += 1
        else:
            m[j] = 1

        if c in m and m[c] >= 1 :
            i -= 2
            total += 1
            m[c] -= 1
            m[j] -= 1
            if m[c] % 2 == 0:
                i += 1
            if m[j] % 2 == 0:
                i += 1
    total += min(i, k)
    print(total)
