n, k = map(int, input().strip().split(' '))

c = 0

for _ in range(n):
	i = int(input())
	if i % k == 0:
		c += 1

print(c)
