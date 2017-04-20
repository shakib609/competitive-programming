cases = int(input())

for _ in range(cases):
    a, b, m = map(int, input().split(' '))
    temp = (a + b) / 3

    a -= temp
    if a == 0:
        print(0)
        continue

    b -= temp
    if b == 0:
        print(m)
        continue

    if a < 0:
        a = 0
    if b < 0:
        b = 0

    m = int(round(m / (a + b) * a))
    print(m)
