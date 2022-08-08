# Sort the array in ascending order
# Divide it into 2 equal arrays (back and front)
# compare the height gap between i-th person in 2 rows
# if gap >= x, count++

t = int(input())
while (t!=0):
    a = list(map(int, input().split()))
    n = int(a[0])
    x = int(a[1])
    m = list(map(int, input().split()))
    m.sort()
    count = 0
    for i in range(0, n):
        if(m[i+n] - m[i] >= x):
            count += 1
    if(count == n):
        print("YES")
    else:
        print("NO")
    t-=1