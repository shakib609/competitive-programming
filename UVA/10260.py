letters = {
    'B': 1, 'F': 1, 'P': 1, 'V': 1,
    'C': 2, 'G': 2, 'J': 2, 'K': 2, 'Q': 2, 'S': 2, 'X': 2, 'Z': 2,
    'D': 3, 'T': 3,
    'L': 4,
    'M': 5, 'N': 5,
    'R': 6
}


while True:
    try:
        inp = input()
    except EOFError:
        break
    l = len(inp)
    result = ''

    for i in range(l):
        if i > 0:
            v = letters.get(inp[i], '')
            if v and v != letters.get(inp[i - 1], ''):
                result += str(v)
        else:
            result += str(letters.get(inp[i], ''))
    print(result)
