s = set()

for _ in range(10):
    n = int(input().strip())
    s.add(n % 42)
print(len(s))
