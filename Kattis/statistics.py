c = 1
while True:
    try:
        n, *nums = map(int, input().strip().split())
    except EOFError:
        break
    mn = mx = nums[0]
    for i in nums[1:]:
        if i > mx:
            mx = i
        elif i < mn:
            mn = i
    r = mx - mn
    print("Case {}:".format(c), mn, mx, r)
    c += 1
