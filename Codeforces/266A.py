n = int(input())
string = input().strip()

ch = string[0]
result = 0

for i in range(1, n):
    if ch == string[i]:
        result += 1
    ch = string[i]

print(result)
