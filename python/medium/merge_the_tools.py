from collections import OrderedDict
# Input
# s = AABCAAADA
# n = 3
# Output:
# AB
# CA
# AD

def merge_the_tools(string, k):
    g = [ string[i:i+k] for i in range(0,len(string), k) ]
    for item in g:
        print(''.join(OrderedDict.fromkeys(item).keys()))
    


