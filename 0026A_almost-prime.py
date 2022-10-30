import math

def is_prime(n):
    for i in range(2,int(math.sqrt(n))+1):
        if (n%i) == 0:
            return False
    return True

def almost_prime(n):
    count = 0
    i = 2
    while (i <= int(n/2)):
        if n % i == 0:
            if is_prime(i): count += 1
        i += 1
    if count == 2: return True
    else:   return False

n = int(input())
result = 0
for i in range(1, n+1):
    if almost_prime(i): result += 1
    
print(result)