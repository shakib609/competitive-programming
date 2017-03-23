from sys import stdin

cases = int(next(stdin))

for _ in range(cases):
    inp = int(next(stdin))
    o = {
        1: 0, 2: 0, 3: 0, 4: 0, 5: 0,
        6: 0, 7: 0, 8: 0, 9: 0, 0: 0
    }
    for i in range(1, inp + 1):
        div, mod = divmod(i, 10)
        while div > 0:
            if div <= 10:
                o[div] += 1
            elif div >= 10:
                o[mod] += 1
            div, mod = divmod(div, 10)

    output = '{} {} {} {} {} {} {} {} {} {}'.format(
                    o[0], o[1], o[2], o[3], o[4], o[5], o[6], o[7], o[8], o[9])

    print(output)
