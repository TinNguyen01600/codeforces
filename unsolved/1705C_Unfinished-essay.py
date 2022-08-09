t = int(input())
while (t!=0):
    a = list(map(int, input().split()))
    n = int(a[0])
    c = int(a[1])
    q = int(a[2])
    s = []
    s = str(input())
    for i in range(0, c):
        a = list(map(int, input().split()))
        l = int(a[0])-1
        r = int(a[1])
        for j in range(l, r):
            s += s[j]
    for i in range(0, q):
        k = int(input())
        print(s[k-1])
    t-=1