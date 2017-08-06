from pprint import pprint
problems = {
    chr(x): {'solved': False, 'penalty': 0} for x in range(ord('A'), ord('Z') + 1)
}

while True:
    s = input().strip()
    if s[0] == '-':
        break
    s, p, v = s.split()
    s = int(s)
    v = (v[0] == 'r')

    if p in problems:
        if problems[p]['solved']:
            continue

    if v:
        problems[p]['solved'] = v
        problems[p]['time'] = s
    else:
        problems[p]['penalty'] += 20

c = 0
t = 0
for p in problems:
    if problems[p]['solved']:
        c += 1
        t += problems[p]['time'] + problems[p]['penalty']

print(c, t)
