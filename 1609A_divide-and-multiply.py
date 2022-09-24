t = int(input())
while (t!=0):
    n = int(input())
    a = list(map(int, input().split()))
    max = 0
    sum = 0
    count = 0
    for i in range(0,n):
        while a[i]%2 == 0: 
            a[i] /= 2
            count += 1
    for i in a:
        if i>max: max = i
        sum += i
    # print(a)
    # print(count)
    
    result = sum - max + max * 2 ** count
    print(int(result))
    t -= 1