m, n = [int(''.join(reversed(i))) for i in input().strip().split()]

print(m if m > n else n)
