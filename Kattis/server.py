n, t = map(int, input().strip().split())
c, s = 0, 0
tasks = map(int, input().strip().split())

for i in tasks:
    s += i
    if s > t:
        break
    c += 1

print(c)
