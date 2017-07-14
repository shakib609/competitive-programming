cases = int(input())

for _ in range(cases):
    name, psdate, bdate, courses = input().strip().split()
    psdate = int(psdate[:4])
    bdate = int(bdate[:4])
    courses = int(courses)

    if psdate >= 2010 or bdate >= 1991:
        result = 'eligible'
    elif courses >= 41:
        result = 'ineligible'
    else:
        result = 'coach petitions'

    print(name, result)
