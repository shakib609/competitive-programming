s = input().strip()
dct = {'.': '0', '-.': '1', '--': '2'}
ch = ''
result = ''

for c in s:
    temp = dct.get(c)
    if temp != None and not ch:
        result += temp
    else:
        ch += c
        if len(ch) == 2:
            result += dct.get(ch)
            ch = ''

print(result)
