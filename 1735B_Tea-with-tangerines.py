import math

t = int(input())
while (t!=0):
    n = int(input())
    a = list(map(int, input().split()))
    steps = 0
    min = 2*a[0] - 1
    for i in a:
        if i > min:
            if i % min == 0:    temp = int(i/min) - 1
            else:   temp = int(i/min) 
            steps += temp
    print(steps)
    t-=1

