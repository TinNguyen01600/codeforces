t = int(input())
while (t!=0):
    n = int(input())
    r = n%7
    last = n%10
    if r <= last:
        n -= r
    else:
        n = n-r+7
    print(n)
    t-=1