# You are given a string and your task is to swap cases. In other words, convert
# all lower case letters and vice versa.

def swap_case(s):
    return ''.join([ c.lower() if c.upper() == c else c.upper() for c in s ])

def swap_case2(s):
    return s.swapcase()


# tests
assert swap_case('TEST') == 'test'
assert swap_case('test') == 'TEST'
assert swap_case('KIM cLarenCe') == 'kim ClARENcE'

assert swap_case2('TEST') == 'test'
assert swap_case2('test') == 'TEST'
assert swap_case2('KIM cLarenCe') == 'kim ClARENcE'

