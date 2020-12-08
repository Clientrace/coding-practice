
# Mat pattern design
# ---------.|.---------
# ------.|..|..|.------
# ---.|..|..|..|..|.---
# -------WELCOME-------
# ---.|..|..|..|..|.---
# ------.|..|..|.------
# ---------.|.---------


def display_pattern(N, M):
    out          = ''
    pattern      = '.|.'
    blanks       = '-'
    design_print = 'WELCOME'
    cone_width =  N//2
    for w in range(cone_width):
        out += ''.join([pattern for i in range(2 * w + 1)]).center(M,blanks) + '\n'
    out += design_print.center(M,blanks) + '\n'
    for w in range(cone_width-1, -1, -1):
        out += ''.join([pattern for i in range(2 * w + 1)]).center(M,blanks) + '\n'
    print(out)


# Unreadable solution 2 :D
def display_pattern2(N, M):
    o = "{}{}{}".format(
        ''.join([''.join(['.|.' for i in range(2 * w + 1)]).center(M,'-') + '\n' for w in range(N//2)]),
        'WELCOME'.center(M,'-') + '\n',
        ''.join([''.join(['.|.' for i in range(2 * w + 1)]).center(M,'-') + '\n' for w in range(N//2-1,-1,-1)])
    );print(o)


display_pattern(7,21)
display_pattern2(7,21)



