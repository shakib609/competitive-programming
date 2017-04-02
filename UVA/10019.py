cases = int(input())

for _ in range(cases):
	m = input()
	x1 = int(m)
	x1 = bin(x1)
	x2 = int(m, 16)
	x2 = bin(x2)
	b1 = b2 = 0

	for x in x1[2:]:
		if x == '1':
			b1 += 1

	for x in x2[2:]:
		if x == '1':
			b2 += 1

	print('{} {}'.format(b1, b2))
