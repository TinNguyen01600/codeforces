import math

def flip(temp):
    y = 0
    while temp != 0:
        y *= 10
        r = temp % 10
        y += r
        temp = int(temp/10)
    return y
    
def remove_zero(a):
    y = 0
    while a != 0:
        y *= 10
        r = a % 10
        if r == 0:  y /= 10
        y += r
        a = int(a/10)
    return flip(int(y))
        

a = int(input())
b = int(input())
c = a + b

a1 = remove_zero(a)
b1 = remove_zero(b)
c1 = remove_zero(c)
if (a1 + b1 == c1): print("YES")
else: print("NO")

