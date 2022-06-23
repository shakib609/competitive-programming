package leetcode

// O(n)
func arraySign(nums []int) int {
	accumulator := 1
	for _, v := range nums {
		if v == 0 {
			accumulator = 0
			break
		} else if v < 1 {
			accumulator *= -1
		}
	}

	return accumulator
}
