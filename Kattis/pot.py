n = int(input().strip())

s = 0

for _ in range(n):
    a = input().strip()
    x, y = int(a[:-1]), int(a[-1])
    s += x ** y

print(s)
