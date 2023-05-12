t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    ks = list(map(int, input().split()))
    cs = list(map(int, input().split()))
    s = "abc"
    fill = "abc"
    newLetter = ord('d')
    pk = 3
    pc = 3
    no = False
    for i in range(k):
        k, c = ks[i], cs[i]
        kdif = (k-pk)
        cdif = (c-pc)
        if (c > k):
            print("NO")
            no = True
            break
        if (kdif < cdif):
            print("NO");
            no = True
            break
        q = kdif - cdif 
        s += fill * int(q/3)
        s += fill[:q % 3]
        fill = fill[q%3:] + fill[:q%3]
        s += chr(newLetter) * cdif
        if (cdif != 0):
            newLetter += 1
        pk = k
        pc = c

    if (not no):
        print("YES")
        print(s)
