from sys import stdin

def ackermann(num):
    count = 0
    while num != 1:
        if num % 2 == 0:
            num = num // 2
        else:
            num = num * 3 + 1
        count += 1
    return count

while True:
    a, b = map(lambda x: int(x), next(stdin).strip().split(' '))
    if a == 0 or b == 0:
        break

    if a > b:
        a, b = b, a
    num = 0
    length = 0

    for i in range(a, b + 1):
        acklength = ackermann(i)
        if acklength > length:
            num = i
            length = acklength

    print('Between {} and {}, {} generates the longest sequence of {} values.'.format(
    a, b, num, length
    ))
