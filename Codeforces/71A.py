n = int(input())

for _ in range(n):
    word = input()
    length = len(word)
    if length > 10:
        print(word[0], len(word) - 2, word[-1], sep='')
    else:
        print(word)
