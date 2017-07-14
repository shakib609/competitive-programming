n = 1
mx = sum(map(int, input().strip().split()))

for i in range(2, 6):
    s = sum(map(int, input().strip().split()))
    if s > mx:
        n = i
        mx = s

print(n, mx)
