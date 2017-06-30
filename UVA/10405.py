while True:
	try:
		m = list(input().strip())
		n = list(input().strip())
	except EOFError:
		break

	m_l, n_l = map(len, [m, n])
	if m_l < n_l:
		m, n = n, m
		m_l, n_l = n_l, m_l
	result = [[0 for _ in range(n_l + 1)] for _ in range(m_l + 1)]

	for i in range(m_l):
		for j in range(n_l):
			if m[i] == n[j]:
				result[i][j] = result[i-1][j-1] + 1
			elif result[i-1][j] >= result[i][j-1]:
				result[i][j] = result[i-1][j]
			else:
				result[i][j] = result[i][j-1]

	result = result[m_l-1][n_l-1]
	print(result)
