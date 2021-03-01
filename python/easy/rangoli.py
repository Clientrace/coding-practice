
# Alphabet Rangoli
# Size 5
# --------e--------
# ------e-d-e------
# ----e-d-c-d-e----
# --e-d-c-b-c-d-e--
# e-d-c-b-a-b-c-d-e
# --e-d-c-b-c-d-e--
# ----e-d-c-d-e----
# ------e-d-e------
# --------e--------

def print_rangoli(size):
    center_val = 97
    for i in range(0,size):
        pattern = []
        p_val = center_val + size
        for j in range(0,size):
            if j  >= size- i - 1:
                p_val -= 1
                pattern.append(chr(p_val))
            else:
                pattern.append('-')
        rev = pattern[:-1]
        rev.reverse()
        print('-'.join(pattern+rev))
    for i in range(size-2,-1,-1):
        pattern = []
        p_val = center_val + size
        for j in range(0,size):
            if j  >= size - i - 1:
                p_val -= 1
                pattern.append(chr(p_val))
            else:
                pattern.append('-')
        rev = pattern[:-1]
        rev.reverse()
        print('-'.join(pattern+rev))

print_rangoli(3)
