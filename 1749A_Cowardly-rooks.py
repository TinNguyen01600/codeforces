t = int(input())
while (t != 0):
    n, m = map(int, input().split())
    x = []
    y = []
    for i in range(0, m):
        a, b = map(int, input().split())
        x.append(a)
        y.append(b)
    if len(x) < n: print("YES")
    else: print("NO")
    t -= 1