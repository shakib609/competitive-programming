import re

reg1 = re.compile(r'^[+\-]?\d+[eE]+[+-]?\d+$')
reg2 = re.compile(r'^[+\-]?\d+\.\d+([eE]+[+-]?\d+)?$')

while True:
	inp = input().strip()
	if inp == '*':
		break
	validated = reg1.search(inp)
	if validated:
		print(inp, 'is legal.')
	else:
		validated = reg2.search(inp)
		if validated:
			print(inp, 'is legal.')
		else:
			print(inp, 'is illegal.')
