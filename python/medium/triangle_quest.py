
# 2 Lines Code
# 1
# 121
# 12321
# 1234321
# 123454321

# Solution 1 with string (Invalid)
for i in range(1, int(input())+1):
    print(''.join([ str(x) for x in range(1,i)]) + ''.join([str(x) for x in range(i,0,-1)]))


# Solution 2 (Also Invalid)
for i in range(1, int(input())+1):
    print(*[x for x in range(1,i)] + [x for x in range(i,0,-1)], sep='')


Solution 3 (Also Invalid)
for i in range(1, int(input())+1):
    print(*[ x if x <= i else i*2-x for x in range(1,i*2) ], sep='')


# Demlo numbers
# Need to generate this sequence: 1, 11, 111, 1111
for i in range(1, int(input())+1):
    print(((10**(i))//9)**2)




