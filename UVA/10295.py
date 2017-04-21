n, l = map(int, input().split(' '))

words = dict()

for _ in range(n):
    t = input().split(' ')
    words[t[0]] = int(t[1])

for _ in range(l):
    result = 0
    flag = True
    temp = []
    while True:
        t = input().strip()
        if not t == '.':
            temp += t.split(' ')
        else:
            break
    for i in temp:
        result += words.get(i, 0)
    print(result)
