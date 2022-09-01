t = int(input())
while (t!=0):
    n = int(input())
    count = 0
    a = list(map(int, input().split()))
    for i in range(1, n):
        if (a[i] % a[0] == 0):
            count += 1
    if (count == n-1):
        print("YES")
    else:
        print("NO")
    t-=1