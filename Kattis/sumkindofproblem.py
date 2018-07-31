c = int(input())

for i in range(1, c + 1):
    _, n = [int(x) for x in input().strip().split()]

    s1 = s2 = s3 = 0
    s1 = n * (n + 1) // 2
    s2 = n ** 2
    s3 = n ** 2 + n
    print(i, s1, s2, s3)
