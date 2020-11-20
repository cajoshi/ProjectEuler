#!/bin/python3

import sys

n = 104743
prime = [True for i in range(n+1)] 
p = 2
while (p * p <= n): 
    if (prime[p] == True): 
        for i in range(p * p, n+1, p): 
            prime[i] = False
    p += 1
a = []
for i in range(104743):
    if prime[i]:
        a.append(i)
    

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    print(a[n+1])
    
    