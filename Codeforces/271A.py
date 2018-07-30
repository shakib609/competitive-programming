y = int(input().strip())

while True:
    y += 1
    if len(set(str(y))) == 4:
        print(y)
        break
