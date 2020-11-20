from math import factorial as fact

for i in range(int(input().strip())):
    m, n = [int(j) for j in input().strip().split(" ")]
    print((fact(m + n) // (fact(m) * fact(n))) % 1000000007)