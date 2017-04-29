cases = int(input())
letters = {i: ((ord(i) - 1) % 3) + 1 for i in 'abcdefghijklmno'}
temp = {
    'p': 1, 'q': 2, 'r': 3, 's': 4,
    't': 1, 'u': 2, 'v': 3, ' ': 1,
    'w': 1, 'x': 2, 'y': 3, 'z': 4
}
letters.update(temp)

for i in range(1, cases + 1):
    result = 0
    s = input()
    for ch in s:
        result += letters.get(ch)
    print("Case #{}: {}".format(i, result))
