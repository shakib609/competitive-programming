from math import pi

n = int(input())

for _ in range(n):
    l = int(input())
    l2 = l * 0.6
    r = l * 0.2

    area1 = pi * r * r
    area2 = (l * l2) - area1

    print("{:.2f} {:.2f}".format(area1, area2))
