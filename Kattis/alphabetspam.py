from decimal import Decimal

s = input().strip()
sp, up, lo, sy = [Decimal(0) for i in range(4)]
l = 0

for ch in s:
    l += 1
    if ch.isalpha():
        if ch.isupper():
            up += 1
        else:
            lo += 1
    else:
        if ch == '_':
            sp += 1
        else:
            sy += 1

sp /= l
lo /= l
up /= l
sy /= l
print('{:.15f}'.format(sp))
print('{:.15f}'.format(lo))
print('{:.15f}'.format(up))
print('{:.15f}'.format(sy))
