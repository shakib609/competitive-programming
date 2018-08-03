n, k = [int(x) for x in input().strip().split()]

mid = round((n / 2) + 0.1)

if k <= mid:
    print(2 * k - 1)
else:
    print(2 * (k - mid))
