n = int(input())
results = []

for i in range(n):
    results.append(sum([int(x) for x in input().strip().split(' ')]))

rank = 1
for i in range(1, n):
    if results[i] > results[0]:
        rank += 1

print(rank)
