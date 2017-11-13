s = input().strip()
l = len(s)
seq = 'heidi'
flag = True

i = 0
found = 0
for j in range(l):
    temp = s.find(seq[i], found)
    if temp == -1:
        flag = False
        break
    i += 1
    found = temp
    if i == 5:
        break

if flag and i == 5:
    print('YES')
else:
    print('NO')
