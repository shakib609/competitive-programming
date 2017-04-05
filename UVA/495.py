fibs = [0, 1]
l = 1

while l <= 5000:
	fibs.append(fibs[-1] + fibs[-2])
	l += 1

while True:
	try:
		n = int(input())
	except EOFError:
		break
	print('The Fibonacci number for {} is {}'.format(n, fibs[n]))
