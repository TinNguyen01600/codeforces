from math import *
 
def count_distict(a):
    result = []
    for i in a:
        if i not in result:
            result.append(i)
    return len(result)
 
t = int(input())
while (t!=0):
    a = list(map(int, input().split()))
    n = a[0]
    k = a[1]
    a = list(map(int, input().split()))
    
    mex = 0
    while mex in a:
        mex += 1
    max = 0
    for i in a:
        if i > max:  max = i 
    ele = ceil((max+mex)/2)
    
    result = count_distict(a)
    
    if k == 0: result += 0
    elif ele > max:
        result = n+k
    else:
        if ele not in a:    result += 1
    print(result)
    t -= 1