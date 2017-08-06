months = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
days = [
    'Thursday', 'Friday', 'Saturday', 'Sunday',
    'Monday', 'Tuesday', 'Wednesday'
]

d, m = map(int, input().strip().split())
d += sum(months[:m])
d %= 7

print(days[d-1])
