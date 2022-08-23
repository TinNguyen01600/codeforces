t = int(input())
while (t!=0):
    n = int(input())
    if n%2 == 1 or n<4:
        print(-1)
    else:
        if n%4 == 0:
            max = int(n//4)
        elif n%4 == 2:
            max = int((n-6)//4 + 1)
        if n%6 == 0:
            min = int(n//6)
        elif n%6 == 2:
            min = int((n-8)//6 + 2)
        elif n%6 == 4:
            min = int((n-4)//6 + 1)
        print(min,max)
    t-=1