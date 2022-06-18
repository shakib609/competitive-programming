package leetcode

func isPowerOfTwo(n int) bool {
	i := 1
	for i <= n {
		if n == i {
			return true
		}
		i *= 2
	}
	return false
}
