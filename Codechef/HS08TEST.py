amount, balance = input().strip().split(' ')
amount = int(amount)
balance = float(balance)

if amount + 0.50 <= balance and amount % 5 == 0:
	balance -= (amount + 0.50)

print('{:.2f}'.format(balance))
