n = 1
while True:
    z, i, m, l = map(int, input().strip().split())
    if z == 0 and i == 0 and m == 0 and l == 0:
        break
    count = 0
    dic = {m: 1}
    while True:
        num = ((z * l) + i) % m
        temp = dic.setdefault(num, 0)
        if temp == 1:
            break
        dic[num] += 1
        count += 1
        l = num
    print("Case {}: {}".format(n, count))
    n += 1
