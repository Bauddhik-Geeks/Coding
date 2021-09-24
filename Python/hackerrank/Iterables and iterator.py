from itertools import combinations
n = int(input())
l1 = input().split()
k = int(input())
a = list(combinations(l1, k))
count = 0
for i in a:
    if 'a' in i:
        count += 1
    else:
        pass
b = count/len(a)
print('{0:.4f}'.format(b))

