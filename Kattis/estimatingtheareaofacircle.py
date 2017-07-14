from decimal import Decimal
from math import pi

while True:
    r, m, c = input().strip().split()
    if r == '0':
        break
    r, m, c = Decimal(r), int(m), int(c)

    area = Decimal(pi) * r * r
    sq = (r * 2) ** 2
    ratio = Decimal(c)/Decimal(m)
    estimate = ratio * sq

    print("{:.6f} {:.6f}".format(area, estimate))
