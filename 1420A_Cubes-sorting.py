# Wheatley uses bubble sorting.
# The complexity of this algorithm is n(n-1)/2
# That is, in the worst case (array in descending order), 
# it takes n(n-1)/2 steps to re-sort the array

# The limit is (n(n-1)/2 - 1) operations, so if the array is not
# initially descending, the answer is YES
# if exists a[i-1] <= a[i] in the array, it is not initially descending


t = int(input())
while (t!=0):
    n = int(input())
    a = list(map(int, input().split()))
    i = 1
    count = 0
    while (i < n):
        if (a[i-1] <= a[i]):
            count = 1
            break
        i += 1
    if count == 1:
        print("YES")
    else:
        print("NO")
    t -= 1

