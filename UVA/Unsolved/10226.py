n = int(input())

for g in range(n):
    if g == 0:
        input()
    c = 0
    trees = dict()
    while True:
        try:
            name = input().strip()
        except EOFError:
            break
        if name == '':
            break
        trees.setdefault(name, 0)
        trees[name] += 1
        c += 1

    if g > 0:
        print()
    for i in sorted(trees):
        result = trees.get(i) / c * 100
        print('{} {:.4f}'.format(i, result))
