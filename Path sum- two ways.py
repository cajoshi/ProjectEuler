n = int(input())
a = [list(map(int,input().strip().split(" "))) for _ in range(n)]

for i in range(n - 2, -1, -1):
    a[n - 1][i] += a[n - 1][i + 1]
    a[i][n - 1] += a[i + 1][n - 1]

for i in range(n - 2, -1, -1):
    for j in range(n - 2, -1, -1):
        a[i][j] += min(a[i + 1][j], a[i][j + 1]) 
print(a[0][0])

    






    
