n = int(input())

for _ in range(n):
    a, b, c = map(int, input().split(' '))
    if a + b > c and a + c > b and b + c > a:
        print('OK')
    else:
        print('Wrong!!')
