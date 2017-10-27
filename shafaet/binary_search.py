def binary_search(iterable, n):
    index = None
    lower = 0
    upper = len(iterable)
    while lower <= upper:
        mid = (lower + upper) // 2
        temp = iterable[mid]
        if temp == n:
            index = mid
            break
        elif temp < n:
            lower = mid - 1
        else:
            upper = mid + 1
    return index



if __name__ == '__main__':
    data = [10, 20, 30, 35, 40, 50, 60]
    n = 30
    print(binary_search(data, n))
