import math

def combination(n, k):
    a = math.factorial(n)
    b = math.factorial(n-k)
    c = math.factorial(k)
    return int(a/(b*c))

t = int(input())
while (t != 0):
    n = int(input())
    a = list(map(int, input().split()))
    k = 2
    n = 10-n
    print(combination(n, k) * 6)
    t -= 1
