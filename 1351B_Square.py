t = int(input())
while (t!=0):
    n = list(map(int, input().split()))
    a1 = n[0]
    b1 = n[1]
    n = list(map(int, input().split()))
    a2 = n[0]
    b2 = n[1]
    if a1 == a2 and b1+b2 == a1:
        print("YES")
    elif a1 == b2 and b1+a2 == a1:
        print("YES")
    elif b1 == a2 and a1+b2 == b1:
        print("YES")
    elif b1 == b2 and a1+a2 == b1:
        print("YES")
    else:   print("NO")        
    t -= 1
