cases = int(input())

for i in range(1, cases + 1):
    m, _ = map(int, input().strip().split())
    lines = []
    for line in range(m):
        lines.append(''.join(reversed(input().strip())))

    print('Test', i)

    for line in lines[-1::-1]:
        print(line)
