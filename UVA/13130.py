cases = int(input())

for x in range(cases):
	raw_numbers = input().strip()
	numbers = list(
		map(
			lambda x: int(x),
			filter(lambda x: x != ' ', raw_numbers)
		)
	)
	if numbers[0] > 2:
		print('N')
		continue
	flag = 1
	for i in range(4):
		if numbers[i + 1] - numbers[i] != 1:
			flag = 0
			break
	if flag == 1:
		print('Y')
	else:
		print('N')
