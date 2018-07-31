def get_v(word):
    v = 0
    for ch in word:
        if ch.isupper():
            v += 1
    return v


length = input()
words = input().strip().split()
max_v = 0

for word in words:
    v = get_v(word)
    if max_v < v:
        max_v = v

print(max_v)
