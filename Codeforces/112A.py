a = input().lower()
b = input().lower()
length = len(a)
result = 0

for i in range(length):
    if a[i] > b[i]:
        result = 1
        break
    elif a[i] < b[i]:
        result = -1
        break
    else:
        continue

print(result)
