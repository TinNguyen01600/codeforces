t = int(input())
while (t!=0):
    n = int(input())
    if n==1:
        result = 2
    elif n==2:
        result = 1
    else:
        result = n//3
        rem = n % 3
        if (rem == 0):
            result += 0
        else:
            result += 1
    print(result)
    t-=1