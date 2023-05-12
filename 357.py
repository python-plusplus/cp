n, m = map(int, input().split())
dc = [[0 for j in range(1, n + 1)] for i in range(1, n + 1)]
arr = [7 for k in range(1, n + 1)]
ma = 0
mb = 0
mc = 0

for i in range(m):
    a, b, c = map(int, input().split())
    if i == 0:
        ma = a
        mb = b
        mc = c
    dc[a][b] = 1
    dc[a][c] = 1
    dc[b][c] = 1
    dc[b][a] = 1
    dc[c][a] = 1
    dc[c][b] = 1

arr[ma] -= 3
arr[mb] -= 5
arr[mc] -= 6
for w in range(1, n + 1):
    if dc[w][ma] == 1:
        arr[w] -= 4 

    elif dc[w][mb] == 1:
        arr[w] -= 2 

    elif dc[w][mc] == 1:
        arr[w] -= 1 
    print(arr[w])

