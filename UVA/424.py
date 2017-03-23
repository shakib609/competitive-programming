from sys import stdin, stdout


result = 0

while True:
    a = int(next(stdin))
    if a == 0: break
    result += a

stdout.write('{}\n'.format(result))
