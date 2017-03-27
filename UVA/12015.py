import bisect

cases = int(input())

for x in range(1, cases + 1):
	sites = dict()
	for i in range(10):
		s = input().strip().split(' ')
		s[1] = int(s[1])
		if not sites.get(s[1]):
			sites[s[1]] = [s[0]]
		else:
			sites[s[1]].append(s[0])
	mx = max(sites)
	print('Case #{}:'.format(x))
	for i in sites[mx]:
		print(i)
