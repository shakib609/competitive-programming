s = input().strip()
l = len(s)

vowels = 'aeiou'
result = ''

i = 0
while i < l:
    result += s[i]
    if s[i] in vowels:
        i += 3
    else:
        i += 1

print(result)
