for i in range(int(input())):
    n = (int(input())-1)//2
    sum = ((16 * (n ** 3)+26 * n) // 3)+((10 * (n ** 2)) + 1)
    print(int(sum%1000000007))