
i = int(input())
s = set(map(int, input().split()[:i]))
i2 = int(input())
s2 = set(map(int, input().split()[:i2]))
print('\n'.join(map(str,list(s.difference(s2).union(s2.difference(s))))))

