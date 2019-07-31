q = int(input().strip())

for _ in range(q):
    total = sum([int(x) for x in input().split(' ')])
    div, mod = divmod(total, 2)
    print(div)
