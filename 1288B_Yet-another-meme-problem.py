# we have a + b + a.b = ab = 10a + b (with b is 1-digit)
# => b = 9
# with n-digit, b = 99..9

def count_digi(b):
    n = 0
    while b!= 0:
        n += 1
        b //= 10
    return n

t = int(input())
while (t!=0):
    n = list(map(int, input().split()))
    a = n[0]
    b = n[1]
    n = count_digi(b)
    if b < 10**n - 1:   result = a * (n-1)
    else:   result = a * n
    print(result)
    t -= 1
