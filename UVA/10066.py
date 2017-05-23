c = 1

while True:
	m, n = [int(i) for i in input().strip().split()]
	if m == 0:
		break
	tower1 = [int(i) for i in input().strip().split()]
	tower2 = [int(i) for i in input().strip().split()]

	result = [[0 for _ in range(n + 1)] for _ in range(m + 1)]

	for i in range(m):
		for j in range(n):
			if tower1[i] == tower2[j]:
				result[i][j] = result[i-1][j-1] + 1
			elif result[i-1][j] >= result[i][j-1]:
				result[i][j] = result[i-1][j]
			else:
				result[i][j] = result[i][j-1]
	result = result[m-1][n-1]
	print("Twin Towers #{}".format(c))
	print("Number of Tiles : {}\n".format(result))
	c += 1
