t = int(input())
while (t!=0):
    s = input()
    count = 0
    if (s[0] == 'y' or s[0] == 'Y'):
        count+=1
    if (s[1] == 'e' or s[1] == 'E'):
        count+=1
    if (s[2] == 's' or s[2] == 'S'):
        count+=1
    if count == 3:
        print("YES")
    else:
        print("NO")
    # print(count)
    t-=1

