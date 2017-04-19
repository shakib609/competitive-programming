def print_mine(mine):
    mine = [[str(m) for m in x] for x in mine]
    mine = [''.join(x) for x in mine]
    for m in mine:
        print(m)

c = 1
while True:
    m, n = map(int, input().split())
    if m == 0 and n == 0:
        break

    mine = []
    for i in range(m):
        l = list(
            map(lambda x: '*' if x == '*' else 0, input()))
        mine.append(l)

    for i in range(m):
        for j in range(n):
            if mine[i][j] == '*':
                for x in range(i - 1, i + 2):
                    if x < 0 or x == m:
                        continue
                    for y in range(j - 1, j + 2):
                        if y < 0 or y == n:
                            continue
                        if mine[x][y] != '*':
                            mine[x][y] += 1
    if c >= 2:
        print()
    print('Field #{}:'.format(c))
    print_mine(mine)
    c += 1
