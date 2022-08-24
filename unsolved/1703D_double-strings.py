from array import *

def check(s, n, string):
    for i in range(0, n):
        if len(s[i]) < len(string):
            for j in range(i, n):
                if len(s[j]) < len(string):
                    if (s[i] + s[j] == string) or (s[j] + s[i] == string):
                        return 1
    return 0

t = int(input())
while (t!=0):
    n = int(input())
    string = []
    i = 0
    result = []
    while (n!=0):
        a = input()
        string.insert(i, a)
        i+=1
        n-=1
    for j in string:
        print(check(string, i, j), end = "")
    print()
    t -= 1