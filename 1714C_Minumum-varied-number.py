t = int(input())
while (t!=0):
    s = int(input())
    k = 10
    result = 0
    while (s>0):
        if(s > k-1):
            k-=1;
        else:
            k = s
        s -= k
        result = result*10 + k
    print(str(result)[::-1])
    t-=1