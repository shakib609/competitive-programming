package leetcode

func isPowerOfTwo(n int) bool {
	if n == 1 {
		return true
	}
	i := 2
	for i <= n {
		if n == i {
			return true
		}
		i *= 2
	}
	return false
}
