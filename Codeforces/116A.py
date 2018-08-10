n = int(input())
mx = 0
passengers = 0

for _ in range(n):
    a, b = [int(x) for x in input().split()]
    passengers -= a
    passengers += b
    if passengers > mx:
        mx = passengers


print(mx)
