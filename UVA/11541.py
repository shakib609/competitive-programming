cases = int(input())

for i in range(1, cases + 1):
	inp = input()
	result = ''
	temp = ''
	letter = ''
	for l in inp:
		if l <= 'Z' and l >= 'A':
			try:
				result += letter * int(temp)
			except:
				pass
			letter = l
			temp = ''
		else:
			temp += l
	result += letter * int(temp)

	print('Case {}: {}'.format(i, result))
