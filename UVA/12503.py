from array import array

cases = int(input())

for _ in range(cases):
	n = int(input())
	temp = array('b', [0])
	result = 0
	for i in range(n):
		operation = input()
		if operation[0] == 'L':
			temp.append(-1)
			result -= 1
		elif operation[0] == 'R':
			temp.append(1)
			result += 1
		else:
			step = int(operation.split(' ')[-1])
			temp.append(temp[step])
			result += temp[step]
	print(result)
