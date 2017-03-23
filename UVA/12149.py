from sys import stdin, stdout

while True:
    inp = int(next(stdin))
    if not inp:
        break
    result = 0
    for i in range(1, inp + 1):
        result += i ** 2
    stdout.write('{}\n'.format(result))
