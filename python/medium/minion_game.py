import re

def minion_game(string):
    s = [0,0]
    for i,c in enumerate(string):
        if c in 'AEIOU':
            s[0] += len(string) - i
        else:
            s[1] += len(string) - i
    if s[0] == s[1]:
        print('Draw')
    else:
        print('Kevin '+str(s[0]) if s[0]>s[1] else 'Stuart '+str(s[1]))
