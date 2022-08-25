t = int(input())
while (t!=0):
    n = int(input())
    a = list(map(int, input().split()))
    i = 1
    count = 0
    while (i < n):
        if (a[i-1] > a[i]):
            temp = a[i-1]
            a[i-1] = a[i]
            a[i] = temp
            i = 0
            count += 1
        i += 1
    # print(a)
    # print(count)
    if count > (n*(n-1)/2 - 1):
        print("NO")
    else:
        print("YES")
    t -= 1