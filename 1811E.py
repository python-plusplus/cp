t = int(input())
d = {'0':'0', '1':'1', '2':'2', '3':'3', '4':'5', '5':'6', '6':'7','7':'8', '8':'9', '9':'0', '10': '1'}
for i in range(t):
    n = int(input())
    i = 0
    m = n
    r = n
    while (r >= 9):
        r = int(r/9)
        m += r*(10**i)
        i += 1;
    ms = str(m)
    rs = ''
    carry = False
    for c in reversed(ms):
        if carry:
            c = str(int(c) + 1)
        if c == '9' or c == '10':
            carry = True
        else:
            carry = False
        rs = d[c] + rs 
    if carry:
        rs = '1' + rs
    print(rs)
