t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    deez = []
    curr = arr[n-1]
    for i in range(n-1):
        deez.append(curr)
        curr ^= arr[n-2-i]
    deez = list(reversed(deez))
    print(deez)
