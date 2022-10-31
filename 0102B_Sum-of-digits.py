import math

def sum_digit(n):
    sum = 0
    for i in n:
        sum += int(i)
    return str(sum)

n = input()
result = 0
while (len(n) > 1):
    n = sum_digit(n)
    result += 1
print(result)