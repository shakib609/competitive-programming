a, b, c = sorted(input().strip().split())
s = input().strip()
result = []

for ch in s:
    if ch == 'A':
        result.append(a)
    elif ch == 'B':
        result.append(b)
    else:
        result.append(c)

print(' '.join(result))
