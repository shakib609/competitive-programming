def isValidSubsequence(array, sequence):
    i = 0
    for v in array:
        if i == len(sequence):
            break
        if v == sequence[i]:
            i += 1
    return i == len(sequence)
