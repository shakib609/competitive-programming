x = int(input().strip())
n = int(input().strip())

rem = x

for _ in range(n):
    rem += x
    rem -= int(input().strip())

print(rem)
