h, m = map(int, input().strip().split())

if m < 45:
    h -= 1
    r = 45 - m
    m = 60 - r
else:
    m -= 45

if h < 0:
    h = 23

print(h, m)
