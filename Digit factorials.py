import math
cntr = [0 for i in range(100001)]
for i in range(10, 100001):
    f = sum([math.factorial(int(j)) for j in str(i)])
    if f % i == 0:
        cntr[i] = 1
    else:
        cntr[i] = 0
sums = 0
n = int(input().strip())
for index, val in enumerate(cntr):
    if index <= n:
        if val:
            sums += index
    if index > n:
        break
print(sums)
