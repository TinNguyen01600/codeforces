import math

t = int(input())
while (t != 0):
    n = int(input())
    if n == 3:  print(-1)
    elif (n % 2 == 0):
        for i in range(n, 0, -1): print(i, end = " ")
        print()
    else:
        temp = math.ceil(n/2)
        for i in range(temp, n+1):   print(i, end = " ")
        for i in range(1, temp):    print(i, end = " ")
        print()
    t -= 1