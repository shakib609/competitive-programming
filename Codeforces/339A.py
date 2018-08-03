inp = [int(x) for x in input().strip().split('+')]

num1 = num2 = num3 = 0

for n in inp:
    if n == 1:
        num1 += 1
    elif n == 2:
        num2 += 1
    else:
        num3 += 1

result = ['1' for x in range(num1)] + ['2' for x in range(num2)] + ['3' for x in range(num3)]

print('+'.join(result))
