from sys import stdin, stdout


cases = int(next(stdin))

for i in range(cases):
    num = next(stdin)
    rev_num = ''.join(reversed(list(num)))

    print('num={} rev_num={}'.format(num, rev_num))

    count = 0

    while num != rev_num:
        print('WOrking! because {}'.format(num != rev_num))
        num = str(int(num) + int(rev_num))
        rev_num = ''.join(reversed(list(num)))
        count += 1

    stdout.write('{} {}\n'.format(count, num))
