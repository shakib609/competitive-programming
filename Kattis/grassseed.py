cost = float(input().strip())
n = int(input().strip())
result = 0.0

for _ in range(n):
    w, l = map(float, input().strip().split())
    result += (w * l)
result *= cost
print("{:.7f}".format(result))
