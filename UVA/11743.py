cases = int(input())

for _ in range(cases):
	card_num = ''.join(input().strip().split(' '))
	card_num = list(map(int, card_num))
	# print(card_num)
	d_sum = 0
	n_sum = 0
	for i in card_num[-2::-2]:
		d_sum += sum(map(int, str(i * 2)))
	for i in card_num[-1::-2]:
		n_sum += i
	s = str(n_sum + d_sum)
	if s[-1] == '0':
		print('Valid')
	else:
		print('Invalid')
