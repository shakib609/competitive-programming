words = dict()

while True:
    l = input().strip()
    if l == '':
        break
    l = l.split(' ')
    words[l[1]] = l[0]

while True:
    try:
        w = input().strip()
    except EOFError:
        break

    result = words.get(w, 'eh')
    print(result)
