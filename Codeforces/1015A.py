n, m = [int(x) for x in input().strip().split()]
count = [0 for _ in range(1, m + 2)]
segments = [
    [int(x) for x in input().strip().split()] for _ in range(n)
]

for s in segments:
    for i in range(s[0], s[1] + 1):
        count[i] = 1

no = []
l = 0

for i in range(1, m + 1):
    if count[i] == 0:
        no.append(str(i))
        l += 1

print(l)
print(' '.join(no))
