from itertools import count

a = [0 for x in range(260)]
temp = []

for j in count(1):
    try:

        if temp:
            for i in temp:
                a[i] = 0
            del temp[0:]

        s = input()
        for i in s:
            a[ord(i)] += 1
        for i in range(len(a)):
            if a[i] > 0:
                temp.append(i)

        temp.sort(reverse=True)
        temp.sort(key=lambda x: a[x])

        if j > 1:
            print()
        for i in temp:
            print("{} {}".format(i, a[i]))

    except EOFError:
        break
