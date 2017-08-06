n = int(input().strip())

b = ''.join(reversed(list(bin(n)[2:])))
print(int(b, 2))
