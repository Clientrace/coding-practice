# Text Alignment: Display hackerrank logo using text alignment methods
# From hackerrank.com
#
# Problem Statement:
# You are given a partial code that is used for generating the HackerRank Logo of variable thickness.
# Your task is to replace the blank (______) with rjust, ljust or center. 
#
# Example:
# Input:
# 5
# Output:
#     H    
#    HHH   
#   HHHHH  
#  HHHHHHH 
# HHHHHHHHH
#   HHHHH               HHHHH             
#   HHHHH               HHHHH             
#   HHHHH               HHHHH             
#   HHHHH               HHHHH             
#   HHHHH               HHHHH             
#   HHHHH               HHHHH             
#   HHHHHHHHHHHHHHHHHHHHHHHHH   
#   HHHHHHHHHHHHHHHHHHHHHHHHH   
#   HHHHH               HHHHH             
#   HHHHH               HHHHH             
#   HHHHH               HHHHH             
#   HHHHH               HHHHH             
#   HHHHH               HHHHH             
#   HHHHH               HHHHH             
#                     HHHHHHHHH 
#                      HHHHHHH  
#                       HHHHH   
#                        HHH    
#                         H 

# My ugly implementation
char  = 'H'
space = 6
width = int(input())
print('{}\n{}\n{}\n{}\n{}'.format(
    '\n'.join([((char*i).rjust(width-1) + char + (char*i).ljust(width-1)) for i in range(width)]),
    '\n'.join([(char*width).center(width*2) + (char*width).center(width*space) for i in range(width+1)]),
    '\n'.join([(char*width*(space-1)).center(width*space) for i in range(int(width/2)+1)]),
    '\n'.join([(char*width).center(width*2) + (char*width).center(width*space) for i in range(width+1)]),
    '\n'.join([((char*(width-i-1)).rjust(width) + char + (char*(width-i-1)).ljust(width)).rjust(width*space) for i in range(width)])
))


