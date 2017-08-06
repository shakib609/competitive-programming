n = int(input())

for _ in range(n):
    t = input().strip().lower()
    s = set()
    for ch in t:
        if ch.isalpha():
            s.add(ch)
    p = []
    for ch in range(ord('a'), ord('z') + 1):
        c = chr(ch)
        if c not in s:
            p.append(c)
    if len(p) < 1:
        print('pangram')
    else:
        print('missing', ''.join(p))
