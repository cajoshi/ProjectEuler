x = int(input())
y = []
for z in range(x):
    y.append(int(input()))

sum = 0

for i in range(x):
    sum = sum + y[i]

print(str(sum)[:10])