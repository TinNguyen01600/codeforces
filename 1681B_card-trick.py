t = int(input())
while (t!=0):
    n = int(input())
    a = list(map(int, input().split()))
    m = int(input())
    b = list(map(int, input().split()))
    sum = 0
    for i in range(0, m):
        sum += int(b[i])
    print(a[sum % n])
    t-=1
