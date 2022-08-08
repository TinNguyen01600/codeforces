# The minimal cost of a path is always top right path
# That is move all to right, them move all down
t = int(input())
while (t!=0):
    n = list(map(int, input().split()))
    sum = 0
    for i in range(1,n[1]):
        sum += i
    for i in range(1,n[0]+1):
        sum += (n[1]*i)
    print(sum)
    t-=1