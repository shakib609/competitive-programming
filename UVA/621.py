cases = int(input())

for x in range(cases):
	n = input().strip()
	l = len(n)
	if l <= 2 and (n == '1' or n == '4' or n == '78'):
		print('+')
	elif n[-2:] == '35':
		print('-')
	elif n[0] == '9' and n[-1] == '4':
		print('*')
	else:
		print('?')
