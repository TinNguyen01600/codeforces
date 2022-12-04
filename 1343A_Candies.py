t = int(input())
while (t!=0):
    n = int(input())
    k = 2
    while n % (2**k - 1) != 0:
        k += 1
    print(int(n / (2**k - 1)))
    t -= 1