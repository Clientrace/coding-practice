# Input
# 1 2
# 3 4
# Output
# (1 ,3) (1, 4) (2, 3) (2, 4)

from itertools import product

list1 = [ int(x) for x in input().split()]
list2 = [ int(x) for x in input().split()]
res = product(list1, list2)
print(' '.join([str(x) for x in list(res)]))





