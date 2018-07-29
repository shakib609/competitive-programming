n, t = [int(x) for x in input().strip().split()]
q = list(input().strip())

for _ in range(t):
    i = 0
    while i < (n - 1):
        if q[i] == 'B' and q[i + 1] == 'G':
            q[i], q[i + 1] = 'G', 'B'
            i += 2
        else:
            i += 1
            continue

print(''.join(q))
