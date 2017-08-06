s = input().strip()

p, e, r = s[::3], s[1::3], s[2::3]

d = 0
for P, E, R in zip(p, e, r):
    if P != 'P':
        d += 1
    if E != 'E':
        d += 1
    if R != 'R':
        d += 1

print(d)
