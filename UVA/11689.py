cases = int(input())

for _ in range(cases):
	e, f, c = map(int, input().strip().split(' '))
	e += f
	result = 0
	while e // c > 0:
		temp = e // c
		result += temp
		e = (e % c) + temp
	print(result)
