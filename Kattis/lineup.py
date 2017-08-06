n = int(input().strip())

t = input().strip()
flag = -1

names = []
for _ in range(n - 1):
    names.append(input().strip())
s_names = list(sorted(names))
rs_names = list(reversed(s_names))

if s_names == names:
    print('INCREASING')
elif rs_names == names:
    print('DECREASING')
else:
    print('NEITHER')
