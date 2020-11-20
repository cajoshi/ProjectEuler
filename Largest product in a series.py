t = int(input())
for i in range(t):
    n,k = input().strip().split(' ')
    n, k = [int(n), int(k)]
    z = input()
    maxprod = 0
    curprod = 0
    for j in range(n - k):
        curprod = int(z[j])
        for l in range(j+1, j+k):
            curprod *= int(z[l])
        if curprod > maxprod:
            maxprod = curprod
    print(maxprod)