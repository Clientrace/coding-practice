

from itertools import permutations
string, num = input().split()
print('\n'.join(sorted([ ''.join(x) for x in list(permutations(string,int(num)))])))
