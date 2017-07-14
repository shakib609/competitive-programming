from math import pi


r, c = map(int, input().strip().split())

r_area = pi * r * r
c = r - c
c_area = pi * c * c
result = c_area / r_area * 100
print("{:.6f}".format(result))
