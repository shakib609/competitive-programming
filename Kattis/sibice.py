from math import sqrt

n, w, h = map(int, input().strip().split())
temp = int(sqrt(w ** 2 + h ** 2))

for _ in range(n):
    i = int(input().strip())
    if h >= i <= w or i <= temp:
        print('DA')
    else:
        print('NE')
