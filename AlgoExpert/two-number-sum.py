# O(n^2)
def twoNumberSum_n2(array, targetSum):
    for x in array:
        complement = targetSum - x
        for y in array:
            if x == y:
                continue
            if y == complement:
                return [x, y]
    return []


# O(n)
def twoNumberSum_n(array, targetSum):
    complement_store = {}
    for x in array:
        complement = targetSum - x
        if complement_store.get(complement) is not None:
            return [x, complement]
        complement_store[x] = complement
    return []


# O(nlog(n))
def twoNumberSum_nlogn(array, targetSum):
    sorted_array = list(sorted(array))
    left, right = 0, len(array) - 1
    while left < right:
        n1, n2 = sorted_array[left], sorted_array[right]
        total = n1 + n2
        if total == targetSum:
            return [n1, n2]
        elif total > targetSum:
            right -= 1
        else:
            left += 1
    return []


def twoNumberSum_n2(array, targetSum):
    return twoNumberSum_n(array, targetSum)
