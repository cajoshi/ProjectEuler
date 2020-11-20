import math
x = int(input())
for z in range(x):
    y = (int(input()))
    z = str(math.factorial(y))
    sum = 0

    for q in range(len(z)):
        sum = sum + int(z[q])

    print(sum)