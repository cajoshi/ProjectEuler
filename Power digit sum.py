import math
x = int(input())
for i in range(x):
    y = (int(input()))
    z = str(2 ** y)
    sum = 0

    for q in range(len(z)):
        sum = sum + int(z[q])

    print(sum)