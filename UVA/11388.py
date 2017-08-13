n = int(input().strip())

for _ in range(n):
    a, b = [int(i) for i in input().strip().split()]
    if b % a == 0:
        print(a, b)
    else:
        print(-1)
