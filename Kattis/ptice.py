n = int(input().strip())
s = input().strip()

a, b, g = 'ABC', 'BABC', 'CCAABB'
A, B, G = '', '', ''
scores = {i: 0 for i in ['Adrian', 'Bruno', 'Goran']}

for i in range(n):
    A += a[i % 3]
    B += b[i % 4]
    G += g[i % 6]

for i in range(n):
    ch = s[i]
    if ch == A[i]:
        scores['Adrian'] += 1
    if ch == B[i]:
        scores['Bruno'] += 1
    if ch == G[i]:
        scores['Goran'] += 1

mx = max(scores.values())
high_scorers = []

for k, v in sorted(scores.items()):
    if v == mx:
        high_scorers.append(k)

print(mx)
print('\n'.join(high_scorers))
