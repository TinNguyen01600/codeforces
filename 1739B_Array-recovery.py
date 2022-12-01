import math

t = int(input())
while (t != 0):
    n = int(input())
    d = list(map(int, input().split()))
    a = []
    a.append(d[0])
    result = 0
    for i in range(1, n):
        if d[i] == 0:   a.append(a[i-1] + d[i])
        elif a[i-1] >= d[i]:   
            result = -1
            break
        else:   
            a.append(a[i-1] + d[i])
    
    if result == -1:    print(result)
    else:
        for i in a: print(i, end = " ")
        print()
    t -= 1