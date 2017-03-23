from sys import stdin, stdout

cases = int(next(stdin))

for i in range(1, cases + 1):
    ages = map(lambda x: int(x), next(stdin).split(' '))
    ages = sorted(ages)
    cap = ages[len(ages) // 2]
    stdout.write('Case {}: {}\n'.format(i, cap))
