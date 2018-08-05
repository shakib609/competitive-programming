n = int(input())
result = 0

for _ in range(n):
    opinions = [int(x) for x in input().strip().split()]
    s = 0
    for opinion in opinions:
        if opinion == 1:
            s += 1
            if s == 2:
                result += 1
                break

print(result)
