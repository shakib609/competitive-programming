import string
from functools import reduce

letters = [x for x in '0' + string.ascii_lowercase]


while True:
    try:
        a = input().strip().lower()
        b = input().strip().lower()
    except EOFError:
        break

    result_a = result_b = 0

    for ch in a:
        try:
            result_a += letters.index(ch)
        except ValueError:
            continue

    for ch in b:
        try:
            result_b += letters.index(ch)
        except ValueError:
            continue

    while len(str(result_a)) != 1:
        result_a = reduce(lambda x, y: x + y, map(
            int, list(
                    str(result_a))))

    while len(str(result_b)) != 1:
        result_b = reduce(lambda x, y: x + y, map(
            int, list(
                str(result_b))))

    if result_a > result_b:
        result_a, result_b = result_b, result_a

    print('{:.2f} %'.format(result_a / result_b * 100))
