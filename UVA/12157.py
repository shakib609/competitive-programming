import array

cases = int(input())

for x in range(1, cases + 1):
	_ = int(input())
	juice = 0
	mile = 0
	durations = array.array('L', map(int, input().split(' ')))

	for d in durations:
		mile += int(d // 30) * 10
		if d % 30 >= 0:
			mile += 10

		juice += int(d // 60) * 15
		if d % 60 >= 0:
			juice += 15

	if mile == juice:
		result = "Mile Juice {}".format(mile)
	elif mile < juice:
		result = "Mile {}".format(mile)
	else:
		result = "Juice {}".format(juice)

	print("Case {}: {}".format(x, result))
