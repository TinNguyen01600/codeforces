# The added element ((max + mex)/2) does not change no matter k.

# If array are natural numbers (0,1,2,3,...), added element 
# always NEW and equals (max+1) 
# => number of disticnt elements increases k after k operations

from math import *

t = int(input())
while (t!=0):
    a = list(map(int, input().split()))
    n = a[0]
    k = a[1]
    a = list(map(int, input().split()))
    
    max = 0
    for i in a:
        if i > max:  max = i 
    if max == n-1:
        n += k
    else:
        mex = 0
        while mex in a:
            mex += 1
        ele = ceil((max+mex)/2)
        if k == 0: n += 0
        else:
            if ele not in a:    n += 1
    print(n)
    t -= 1
