import math

n = int(input())
a = input()
if n % 2 == 0:
    print(a[0] + a[1], end = "")
    i = 2
else:
    print(a[0] + a[1] + a[2], end = "")
    i = 3

while i < n:
    print("-" + a[i] + a[i+1], end = "")
    i+=2

