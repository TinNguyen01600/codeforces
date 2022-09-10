import math

a = list(map(int, input().split()))
n = a[0]
k = a[1]
if k >= n+1:    result = n - math.floor(k/2)
else:   result = math.ceil(k/2) - 1
if result <= 0: result = 0
print(result)
