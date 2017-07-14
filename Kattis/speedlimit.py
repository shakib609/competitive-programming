while True:
    n = int(input().strip())
    if n < 0:
        break

    d, pt = map(int, input().strip().split())
    total = d * pt
    for _ in range(n - 1):
        d, t = map(int, input().strip().split())
        total += d * (t - pt)
        pt = t
    print(total, 'miles')
