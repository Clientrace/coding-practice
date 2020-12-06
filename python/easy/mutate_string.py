# Mutations : Mutate string in python
# From hackerrank.com
# 
# Problem Statement:
# We have seen that lists are mutable (they can be changed), and tuples are
# immutable (they cannot be changed).
# You are given an immutable string, and you want to make changes to it.
#
# Example:
# Input:
# abracadabra
# 5 k
# Output:
# abrackdabra
# ( replace index 5 by character 'k' )

# Solution using python list comprehension and 'enumerate' builtin method
# that the one reading this don't probably know.
def mutate_string(s, pos, char):
    return ''.join([ char if i == pos else c for i, c in enumerate(s)])

# Solution without using loops
def mutate_string2(s, pos, char):
    return s[:pos] + char + s[pos+1:]

# Tests
input_args = {'s':'abracadabra', 'pos':5, 'char':'k'}
assert mutate_string(**input_args) == 'abrackdabra'
assert mutate_string2(**input_args) == 'abrackdabra'
print("\n".join(['Input',str(input_args),'Output', mutate_string(**input_args)]))




