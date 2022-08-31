t = int(input())
while (t!=0):
    n = int(input())
    string = input()
    result = [] 
    for i in string: 
        if i not in result: 
            result.append(i)
    k = len(result) * 2 + (n - len(result))
    print(k)
    t -= 1