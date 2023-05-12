n = int(input())
m = 0
for i in str(n):
    if i == '4' or i == '7':
        m += 1

if m == 4 or m == 7:
    print("YES")
else:
    print("NO")

