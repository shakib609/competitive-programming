n = int(input())

peoples = []
for _ in range(n):
	peoples.append(input().strip())

song = "Happy birthday to you \
Happy birthday to you \
Happy birthday to Rujia \
Happy birthday to you".split(' ')
l = 16
counter = 0
i = 0
j = 0

while True:
	print("{}: {}".format(peoples[i], song[j]))
	counter += 1
	if counter % l == 0 and counter > n:
		break
	if i == n - 1:
		i = 0
	else:
		i += 1
	if j == l - 1:
		j = 0
	else:
		j += 1
