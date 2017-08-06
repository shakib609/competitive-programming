s = input().strip()
apaxed = s[0]

for i in s[1:]:
    if i == apaxed[-1]:
        pass
    else:
        apaxed += i

print(apaxed)
