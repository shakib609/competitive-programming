cases = int(input().strip())

for i in range(1, cases + 1):
    n = int(input().strip())
    temp = input().strip().split()
    guests = {x: 0 for x in temp}
    for g in temp:
        guests[g] += 1
    guests = {k: v for v, k in guests.items()}
    print('Case #{}:'.format(i), guests[1])
