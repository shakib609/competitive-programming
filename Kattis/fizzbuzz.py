x, y, n = map(int, input().strip().split())

for i in range(1, n + 1):
    a = bool(i % x == 0)
    b = bool(i % y == 0)
    if a & b:
        print('FizzBuzz')
    elif a:
        print('Fizz')
    elif b:
        print('Buzz')
    else:
        print(i)
