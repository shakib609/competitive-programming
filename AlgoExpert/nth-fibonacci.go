package main

func GetNthFib(n int) int {
	if n == 1 {
		return 0
	}
	if n == 2 {
		return 1
	}
	n1, n2 := 0, 1
	var result int
	for i := 3; i <= n; i++ {
		result = n1 + n2
		n1, n2 = n2, result
	}
	return result
}
