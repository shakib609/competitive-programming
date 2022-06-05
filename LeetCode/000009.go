package leetcode

import "strconv"

// O(n)
func isPalindrome(x int) bool {
	numStr := strconv.Itoa(x)
	length := len(numStr)
	for i, j := 0, length-1; i < j; i++ {
		if numStr[i] != numStr[j] {
			return false
		}
		j--
	}
	return true
}
