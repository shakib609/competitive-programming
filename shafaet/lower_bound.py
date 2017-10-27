def search_lower_bound(arr, value):
    begin = 0
    end = len(arr)
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


if __name__ == '__main__':
    arr = [1, 3, 3, 4, 5, 6]
    print(search_lower_bound(arr, 3))
