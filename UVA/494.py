import re

word = re.compile(r'[a-zA-Z]+')

while True:
	try:
		inp = input()
	except EOFError:
		break
	count = len(word.findall(inp))
	print(count)
