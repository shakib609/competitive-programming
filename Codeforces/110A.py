string = input().strip()
lucky_numbers = ['4', '7']

s = 0

for ch in string:
    if ch in lucky_numbers:
        s += 1

s = str(s)
lucky = True

for ch in s:
    if ch not in lucky_numbers:
        lucky = False

print("YES" if lucky else "NO")
