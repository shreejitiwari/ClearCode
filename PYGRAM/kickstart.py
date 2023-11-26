import numpy as np
from math import sqrt
sqrt()
res_lst = []

no_of_test = int(input())
for i in range(no_of_test):
    steps_lst = []
    res = 0
    # if 1<=p<=m:
    m,n,p = map(int,input().split())
    for j in range(m):
        L = list(map(int,input().split()))
        steps_lst.append(L)
    arr = np.array(steps_lst)
    for k in range(n):
       l = arr[:,k]
       res += max(l)-l[p-1]
    res_lst.append(res)
 
if 1<=p<=m:      
    for  test in range(len(res_lst)):
        print(f"Case #{test+1}: {res_lst[test]}")