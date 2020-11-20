n = 24000
arr = [1, 1] + [0] * (n-2)
for i in range(2, n):
    arr[i] = arr[i-1] + arr[i-2]
num = {}
for i in range(len(arr)):
    if len(str(arr[i])) not in num.keys():
        num[len(str(arr[i]))] = i + 1
for _ in range(int(input().strip())):
    k = int(input().strip())
    print(num[k])