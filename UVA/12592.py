slogans = []

n = int(input())

for i in range(n):
	a = input()
	b = input()
	slogans.append([a, b])

n = int(input())

for i in range(n):
	a = input()
	for i in slogans:
		if a == i[0]:
			print(i[1])
			break
