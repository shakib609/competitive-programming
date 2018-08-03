s1 = input().strip()
s2 = input().strip()
length = len(s1)
result = ''

for i in range(length):
    if s1[i] != s2[i]:
        result += '1'
    else:
        result += '0'

print(result)
