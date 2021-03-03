

def countingValleys(steps, path):
    v_count = 0 # valley count 
    slevel = 0  # sea level index
    for i in range(0,len(path[:steps])):
        slevel += 1 if path[i] == 'U' else -1
        if slevel == 0 and path[i] == 'U':
            v_count += 1
    return v_count
                
