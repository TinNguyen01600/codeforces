# If the number of pile (n) is odd, Mike always win
# because after each round, Mike will remove rocks from
# Joe's pile and vice versa. So if Mike goes first, he
# will pick all rocks from his 1st pile, leaving 0 rock
# for Joe to pick in the 2nd round.

# If n even, Mike and Joe will play the same pile every round,
# Mike pick from even piles (0, 2, 4, 6, ...)
# whose piles have the min number of stones will lose

t = int(input())
while (t!=0):
    n = int(input())
    a = list(map(int, input().split()))
    if n % 2 == 0:
        min = a[0]
        for i in range(0, n):
            if a[i] < min: min = a[i]
        for i in range(0, n):
            if a[i] == min: break;
        if i % 2 == 0: print("Joe")
        else:   print("Mike")
    else:   print("Mike")
    t -= 1