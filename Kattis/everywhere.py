cases = int(input().strip())

for _ in range(cases):
    n = int(input().strip())
    cities = set()
    for _ in range(n):
        cities.add(input().strip())
    print(len(cities))
