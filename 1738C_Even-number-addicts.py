import math

t = int(input())
while (t != 0):
    n = int(input())
    a = list(map(int, input().split()))
    count_odd = 0
    for i in a:
        if i % 2 == 1: count_odd += 1
    
    temp = math.ceil(count_odd / 2)
    if count_odd == 0:  print("Alice")
    else:
        if temp % 2 == 0:   print("Alice")
        else:
            if count_odd % 2 == 0:  print("Bob")
            else:
                if n % 2 == 0:  print("Alice")
                else:   print("Bob")
    t -= 1