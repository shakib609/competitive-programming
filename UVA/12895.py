cases = int(input())

for _ in range(cases):
    s = input().strip()
    l = len(s)
    temp = 0
    for ch in s:
        temp += int(int(ch) ** l)
    s = int(s)
    if s == temp:
        print('Armstrong')
    else:
        print('Not Armstrong')
