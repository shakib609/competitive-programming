from itertools import count

while True:
    n = input().strip()
    s = int(n)
    if n == '0':
        break
    s_digits = sum(map(int, list(n)))

    for i in count(11):
        temp = str(i * s)
        if s_digits == sum(map(int, list(temp))):
            print(i)
            break
