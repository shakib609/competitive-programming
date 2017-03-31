cases = int(input())

for _ in range(cases):
	total, diff = map(int, input().split())
	flag, largest, lowest = False, -1, -1

	if diff > total:
		print("impossible")
		continue

	for i in range(total, -1, -1):
		temp = i - diff
		if temp + i == total:
			largest = i
			lowest = temp
			flag = True
			break
		elif temp < 0:
			break

	if flag:
		print("{} {}".format(largest, lowest))
	else:
		print("impossible")
