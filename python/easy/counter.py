
# Counter


from collections import Counter


total_income = 0
x = int(input())
s_list = Counter([ int(x) for x in  input().split() ])
c_size = int(input())

for i in range(0,c_size):
    size, price = [int(x) for x in input().split()]
    if s_list[size]:
        total_income += price
        s_list[size] -= 1

print(total_income)
