cases = int(input())

for x in range(cases):
	n, max_w = map(int, filter(lambda x: x != ' ', input().split(' ')))
	c = 0
	s = 0
	weights = sorted(map(int, filter(lambda x: x != ' ', input().split(' '))))

	for i in weights:
		s += i
		if s <= max_w:
			c += 1
		else:
			break
	print(c)
