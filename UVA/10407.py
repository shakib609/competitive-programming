#!/usr/bin/env python

from sys import stdin, stdout

while True:
    inp = list(map(lambda x: int(x), next(stdin).split(' ')))
    if inp[0] == 0: break
    inp = list(sorted(inp[:-1]))

    for i in range(2, inp[0]):
        rem = 0
        for j in inp:
            temp = j % i
            if temp == rem:
                continue
            else:
                rem = temp
                break
    print(rem)
