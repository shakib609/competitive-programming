def search_upper_bound(arr, value):
    begin = 0
    end = len(arr) - 1
    while begin <= end:
        mid = (begin + end) // 2
        temp = arr[mid]
        if temp > value:
            end = mid - 1
        else:
            begin = mid + 1
    return begin


def search_lower_bound(arr, value):
    begin = 0
    end = len(arr) - 1
    while begin <= end:
        mid = (begin + end) // 2
        temp = arr[mid]
        if temp == value:
            end = mid - 1
        elif temp > value:
            end = mid - 1
        else:
            begin = mid + 1
    return begin


n = int(input())
arr = list(map(int, input().strip().split()))
_ = input()
query = map(int, input().strip().split())

for q in query:
    lower = search_lower_bound(arr, q) - 1
    upper = search_upper_bound(arr, q)
    if lower < 0:
        print('X ', end='', sep='')
    else:
        print(arr[lower], ' ', end='', sep='')
    if upper == n:
        print('X')
    else:
        print(arr[upper])
