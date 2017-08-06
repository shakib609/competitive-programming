cases = int(input().strip())

for _ in range(cases):
    required_cal = int(input().strip())
    result, mod = divmod(required_cal, 400)
    if mod != 0:
        result += 1
    print(result)
