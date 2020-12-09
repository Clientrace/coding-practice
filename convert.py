
line1 = "                ██████ ██       █████  ██████  ███████ ███    ██  ██████ ███████               "
line2 = "               ██      ██      ██   ██ ██   ██ ██      ████   ██ ██      ██                    "
line3 = "               ██      ██      ███████ ██████  █████   ██ ██  ██ ██      █████                 "
line4 = "               ██      ██      ██   ██ ██   ██ ██      ██  ██ ██ ██      ██                    "
line5 = "                ██████ ███████ ██   ██ ██   ██ ███████ ██   ████  ██████ ███████               "
clist = [line1,line2,line3,line4,line5]

out = ''
stack = []
index = 0
for l in clist:
    for c in l:
        if len(stack)>0:
            if c != stack[-1]:
                char = 'c' if stack[-1] == '█' else 's'
                out += char+str(len(stack))
                # print(out)
                stack = []
        stack.append(c)

    
    char = 'c' if stack[-1] == '█' else 's'
    out += char +str(len(stack)) + 'n1'
    stack = []


print(out)

                
