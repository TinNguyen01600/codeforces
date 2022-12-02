t = int(input())
while (t!=0):
    n = int(input())
    result = 0
    while n >= 10:
        result += ((n//10)*10)
        n = n%10 + n//10
    print(n+result)
    t -= 1