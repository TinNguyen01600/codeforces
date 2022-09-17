# If n >= 3:
#   for i in a:
#       if a[i+1] - a[i] > 3:   answer is NO
#       if a[i+1] - a[i] == 3:
#           all numbers from i+1 to end must consecutively increase
#           For ex, 2->(3) ; 3->(4) ; 6->(5) ; 7->(6) ; 8->(7) ...
#           Last element must be 8
#           which means a[n-1] - a[i+1] != (n-1) - (i+1), answer is NO
#       if a[i+1] - a[i] == 2:
#           for ex, 2->(3) ; 3->(4) ; 5 ; 6 ; 7 ; 8 ...
#           or,     2->(3) ; 3->(4) ; 5 ; 6 ; 7 ; 9->(8) ...
#           Last number must be 8 or 9
#           which means a[n-1] - a[i+1] > (n-1) - (i+1) + 1, answer is NO

t = int(input())
while (t!=0):
    n = int(input())
    a = list(map(int, input().split()))
    result = 1
    if n == 1: result = 1
    elif n == 2:
        if int(a[1]) - int(a[0]) <= 3:    result = 1
        else:   result = 0
    else:
        for i in range(0,n-1):
            if int(a[i+1]) - int(a[i]) == 2:
                if (int(a[n-1]) - int(a[i+1]) > (n-1) - (i+1) + 1):
                    result = 0
                    break
            elif int(a[i+1]) - int(a[i]) == 3:
                if int(a[n-1]) - int(a[i+1]) != (n-1) - (i+1):
                    result = 0
                    break
            elif int(a[i+1]) - int(a[i]) > 3: 
                result = 0
                break
    
    if result == 0: print("NO")
    else:   print("YES")
    t -= 1
