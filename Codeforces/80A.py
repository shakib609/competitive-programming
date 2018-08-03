n, m = [int(x) for x in input().strip().split()]

if m % 2 == 0:
    print("NO")
else:
    length = m + 1
    nums = [False, False] + [True for x in range(length - 2)]
    p = 2
    while p ** 2 <= length:
        if nums[p] is True:
            for i in range(2 * p, length, p):
                nums[i] = False
        p += 1
    if nums[m]:
        for i in range(n + 1, length):
            if nums[i] is True:
                if m == i:
                    print("YES")
                else:
                    print("NO")
                break
    else:
        print("NO")
