s = input().strip()
t, c, g = [0, 0, 0]

for ch in s:
    if ch == 'T':
        t += 1
    elif ch == 'C':
        c += 1
    else:
        g += 1

result = t ** 2 + c ** 2 + g ** 2
result += min([t, c, g]) * 7

print(result)
