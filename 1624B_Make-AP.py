t = int(input())
while (t!=0):
    n = list(map(int, input().split()))
    a = n[0]
    b = n[1]
    c = n[2]
    if ((a+c)/2) % b == 0:  print("YES")
    elif (b*2-a) % c == 0:  
        if b*2-a <= 0: print("NO")
        else:   print("YES")
    elif (b*2-c) % a == 0:
        if b*2-c <= 0: print("NO")
        else:   print("YES") 
    else: print("NO")
    t -= 1
