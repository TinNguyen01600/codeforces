import math

t = int(input())
while (t!=0):
    n = int(input())
    a = input()
    if n==1:
        if int(a) % 2 == 0: print(2)
        else:   print(1)
    else:
        raze = []
        breach = []
        count_odd_raze = 0
        count_even_breach = 0
        for i in range(n):
            if (i%2 == 0):
                raze += a[i]   
                if (int(a[i]) % 2 == 1):    
                    count_odd_raze = 1
            else:  
                breach += a[i]    
                if (int(a[i]) % 2 == 0):    
                    count_even_breach = 1
            
        if n%2 == 0:    # breach decides
            if count_even_breach == 1:  print(2)
            else:   print(1)
        else:
            if count_odd_raze == 1: print(1)
            else:   print(2)
    t -= 1

