# Problem: https://www.hackerrank.com/challenges/piling-up/problem
t = int(input())
out = []
for i in range(0,t):
    n = int(input())
    top = None
    flag = False
    cubes = list(map(int,input().split()))
    for i in range(0,len(cubes)):
        b = 0
        if cubes[-1] > cubes[0]:
            b = cubes.pop(-1)
        else:
            b = cubes.pop(0)
        if top != None:
            print(top)
            print(b)
            print('==')
            if top < b:
                flag = True
                break
        top = b
    print('No' if flag else 'Yes')





