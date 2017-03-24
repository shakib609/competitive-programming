primes = [2, 3, 5, 7, 11, 13, 17]
limit = int(2 ** 15)

for n in range(19, limit):
	flag = 1
	for i in primes:
		if n % i == 0:
			flag = 0
			break
	if flag:
		primes.append(n)

while True:
	n = int(input())
	if n == 0:
		break
	counter = 0
	for i in primes:
		if i > n // 2:
			break
		temp = n - i
		if temp in primes:
			counter += 1
	print(counter)
