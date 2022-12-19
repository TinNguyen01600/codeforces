import math

t = int(input())
while (t != 0):
    l, r, a = map(int, input().split())
    if (int(l/a) == int(r/a)):
        result = int(r/a) + r % a
    else:
        r1 = int(r/a) + r % a
        r2 = int(r/a) - 1 + (a-1)
        if r1 > r2: result = r1
        else:   result = r2
        
    print(result)
    t-=1
