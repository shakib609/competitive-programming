m, n = map(int, input().strip().split())
if m > n:
    m, n = n, m

for i in range(m + 1, n + 2):
    print(i)
