t = int(input())
while (t!=0):
    n = int(input())
    n1 = n
    count = 0
    while(n!=0):
        n = int(n/10)
        count += 1
    print(n1 - 10**(count-1))
    t-=1