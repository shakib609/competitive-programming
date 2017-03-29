from array import array

while True:
	try:
		n, budget, hotels, weeks = map(int, input().split(' '))
	except EOFError:
		break
	cost = 100000001
	for _ in range(hotels):
		price = int(input())
		vacant_beds = array('L', map(int, input().split(' ')))
		if price * n > budget:
			continue
		for beds in vacant_beds:
			if beds >= n:
				temp = n * price
				if cost > temp:
					cost = temp
	if cost == 100000001:
		print('stay home')
	else:
		print(cost)
