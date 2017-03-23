import math
from sys import stdin, stdout

count = 1

while True:
    inp = list(map(lambda x: float(x), next(stdin).split(' ')))

    if inp[0] == 0:
        exit(0)
    else:
        stdout.write('Case {}: '.format(count))
        if inp[0] == 1:
            u, v, t = inp[1:]
            a = (v - u) / t
            s = (u + v) * t / 2
            stdout.write('{:.3f} {:.3f}\n'.format(s, a))
        elif inp[0] == 2:
            u, v, a = inp[1:]
            t = (v - u) / a
            s = (u + v) / 2 * t
            stdout.write('{:.3f} {:.3f}\n'.format(s, t))
        elif inp[0] == 3:
            u, a, s = inp[1:]
            v = math.sqrt(u ** 2 + 2 * a * s)
            t = (v - u) / a
            stdout.write('{:.3f} {:.3f}\n'.format(v, t))
        else:
            v, a, s = inp[1:]
            u = math.sqrt(v ** 2 - 2 * a * s)
            t = (v - u) / a
            stdout.write('{:.3f} {:.3f}\n'.format(u, t))
    count += 1
