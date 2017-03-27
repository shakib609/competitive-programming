while True:
	c, n = sorted(map(int, input().split()))

	if c == -1:
		break

	if n - c > 50:
		print(100 - (n - c))
	else:
		print(n - c)
