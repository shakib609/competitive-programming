while True:
	try:
		a, b = map(int, input().strip().split(' '))
	except EOFError:
		break
	a, b = bin(a), bin(b)
	a, b = a[2:], b[2:]
	s = ''
	maxLen = lena = len(a)
	lenb = len(b)
	if lena > lenb:
		b = '0' * (lena - lenb) + b
	elif lenb > lena:
		maxLen = lenb
		a = '0' * (lenb - lena) + a
	for i in range(maxLen):
		if a[i] == b[i]:
			if a[i] == '1':
				s += '0'
			else:
				s += '0'
		else:
			s += '1'
	s = int(s, 2)
	print(s)
