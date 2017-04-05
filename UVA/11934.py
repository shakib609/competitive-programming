def f(x, a, b, c):
	return (a * x * x) + (b * x) + c

while True:
	a, b, c, d, l = map(int, input().strip().split(' '))
	if a == 0 and b == 0 and c == 0 and d == 0 and l == 0:
		break
	count = 0

	for i in range(l + 1):
		if f(i, a, b, c) % d == 0:
			count += 1
	print(count)
