cases = int(input())

for _ in range(cases):
    sounds = input().strip().split()
    known = []
    fox = []
    while True:
        s = input().strip()
        if s[-1] == '?':
            break
        known.append(s.split()[-1])

    for sound in sounds:
        if sound not in known:
            fox.append(sound)
    print(' '.join(fox))
