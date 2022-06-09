def nonConstructibleChange(coins):
    coins.sort()
    change = 0
    for v in coins:
        if v > change + 1:
            break
        else:
            change += v
    return change + 1
