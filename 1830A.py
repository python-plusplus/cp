t = int(input())
for _ in range(t):
    myDict = {}
    myDict[1] = 0;
    pairs = [];
    n = int(input())
    for _ in range(n-1):
        pairs.append(list(map(int,input().split())))

    m = 0
    while (len(myDict) < n):
        for i, pair in enumerate(pairs):
            if pair[0] in myDict:
                myDict[pair[1]] = 0
        m += 1
    print(m)
