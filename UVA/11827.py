from math import gcd
from sys import stdin, stdout

cases = int(next(stdin))

while cases != 0:
    nums = list(map(lambda x: int(x), next(stdin).split(' ')))
    m = 1
    for i in range(len(nums)):
        for j in nums[i + 1:]:
            g = gcd(nums[i], j)
            if g > m:
                m = g
    stdout.write('{}\n'.format(m))
    cases -= 1
