link to question [https://www.hackerrank.com/challenges/30-2d-arrays/problem](https://www.hackerrank.com/challenges/30-2d-arrays/problem)

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))
sum=[]
s=0
for i in range(0,4):
    for j in range(0,4):
        s=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]
        sum.append(s)
sum.sort(reverse=True)
print(sum[0])
