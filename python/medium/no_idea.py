# Problen: https://www.hackerrank.com/challenges/no-idea/problem?h_r=next-challenge&h_v=zen
from collections import Counter
n,m = map(int,input().split())
i = Counter(map(int,input().split()[:n]))
a = set(map(int,input().split()[:m]))
b = set(map(int,input().split()[:m]))
like = sum([i[x] for x in list(a.intersection(i))])
dislike =  sum([-i[x] for x in list(b.intersection(i))])
print(like+dislike)