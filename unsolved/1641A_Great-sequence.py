t = int(input())
while (t != 0):
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    result = 0
    while(n > 0):
        temp = x * int(a[0])
        if temp in a:
            a.remove(temp)
            n -= 1
        else:
            result += 1
        a.remove(a[0])
        n -= 1
    print(result)
    t -= 1