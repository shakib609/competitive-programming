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


if __name__ == '__main__':
    arr = [1, 3, 3, 5, 6]
    n = int(input())
    print(search_upper_bound(arr, n))
