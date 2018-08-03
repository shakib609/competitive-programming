import re
regex = re.compile(r'[HQ9]')

inp = input()

if regex.search(inp) is not None:
    print("YES")
else:
    print("NO")
