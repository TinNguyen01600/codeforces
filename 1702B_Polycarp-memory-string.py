t = int(input())
while (t!=0):
    string = input()
    day = 1
    result = []
    for i in string:
        if (len(result) == 3 and i not in result):
            result = []
            day += 1
        if i not in result:
            result += i
    print(day)
    t -= 1
