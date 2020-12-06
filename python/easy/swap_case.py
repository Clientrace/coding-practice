# sWAP cASE : Swap case in python
# From hackerrank.com
# 
# Problem Statement:
# You are given a string and your task is to swap cases. In other words, convert
# all lower case letters and vice versa.
#
# Example:
# Input:
# HackerRank.com presents "Pythonist 2".
# Output:
# hACKERrANK.COM PRESENTS "pYTHONIST 2".

# Solutions:
# Without using builtin library
def swap_case(s):
    return ''.join([ c.lower() if c.upper() == c else c.upper() for c in s ])

# Using builtin swapcase for string method
def swap_case2(s):
    return s.swapcase()

# Tests
assert swap_case('HackerRank.com presents "Pythonist 2".') \
    == 'hACKERrANK.COM PRESENTS "pYTHONIST 2".'

assert swap_case('TEST') == 'test'
assert swap_case('test') == 'TEST'
assert swap_case('KIM cLarenCe') == 'kim ClARENcE'

assert swap_case2('TEST') == 'test'
assert swap_case2('test') == 'TEST'
assert swap_case2('KIM cLarenCe') == 'kim ClARENcE'


