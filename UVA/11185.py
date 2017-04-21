while True:
    n = int(input())
    if n < 0:
        break

    result = ''
    temp = n
    temp1 = n // 3
    while temp1 > 0:
        temp2 = str(temp % 3)
        result += temp2
        temp = temp1
        temp1 = temp1 // 3
    temp2 = str(temp % 3)
    result += temp2

    result = ''.join(reversed(result))
    print(result)
