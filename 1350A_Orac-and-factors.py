# The solution is surprisingly ez
# If n even, result = n + 2k because f(n) always = 2
# For ex n = 6. Changes 6(2) -> 8(2) -> 10(2) -> ...
# If n odd, result = f(n) + 2(k-1) because 
# after the 1st f(n) (which is also odd => n + f(n) even),
# all f(n) behind it = 2
# For ex n = 21. Changes 21(3) -> 24(2) -> 26(2) -> ...

def f(n):
    i = 2
    while n % i != 0:
        i += 1
    return i

t = int(input())
while (t!=0):
    a = list(map(int, input().split()))
    n = a[0]
    k = a[1]
    if n % 2 == 0:  n += 2*k
    else:   n += f(n) + 2*(k-1)
    print(n)
    t -= 1