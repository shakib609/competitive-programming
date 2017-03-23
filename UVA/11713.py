import re
from sys import stdin, stdout

cases = int(next(stdin))

vowel = re.compile(r'a|e|i|o|u')

for _ in range(cases):
    n1 = next(stdin).rstrip()
    n2 = next(stdin).rstrip()

    ln1 = len(n1)
    ln2 = len(n2)
    result = 'Yes'
    if ln1 == ln2:
        for i in range(ln1):
            if vowel.search(n1[i]) and vowel.search(n2[i]):
                continue
            else:
                if n1[i] != n2[i]:
                    result = 'No'
                    break
                else:
                    continue
    else:
        result = 'No'
    stdout.write('{}\n'.format(result))
