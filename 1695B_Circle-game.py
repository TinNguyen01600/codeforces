t = int(input())
while (t!=0):
    n = int(input())
    a = list(map(int, input().split()))
    if n % 2 == 0:
        if a[0] > a[1]: print("Mike")
        else:   print("Joe")
    else:   print("Mike")
    t -= 1