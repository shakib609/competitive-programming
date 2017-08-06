c = 1

while True:
    n = int(input().strip())
    if n == 0:
        break
    names = []
    for i in range(n):
        names.append(input().strip())

    print('SET', c)
    for name in names[::2]:
        print(name)
    if n > 1:
        temp = names[-1::-2] if n & 1 == 0 else names[-2::-2]
        for name in temp:
            print(name)
    c += 1
