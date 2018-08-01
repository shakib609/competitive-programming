n = int(input())
points = [int(x) for x in input().strip().split()]
lowest = highest = points[0]
result = 0

for point in points[1:]:
    if point < lowest:
        lowest = point
        result += 1
    elif point > highest:
        highest = point
        result += 1

print(result)
