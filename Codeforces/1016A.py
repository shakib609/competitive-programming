n, m = [int(x) for x in input().strip().split()]
names_count = [int(x) for x in input().strip().split()]

rem = m
page_turns = []

for i in range(n):
    page_turn = 0
    count = names_count[i]

    if count <= m:
        if rem > count:
            page_turns.append('0')
            rem -= count
        elif rem == count:
            page_turns.append('1')
            rem = m
        else:
            page_turns.append('1')
            rem = m - count + rem
    else:
        count -= rem
        page_count, rem2 = divmod(count, m)
        rem = m - rem2
        page_turns.append(str(page_count + 1))

print(' '.join(page_turns))
