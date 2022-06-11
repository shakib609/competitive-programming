package leetcode

// O(n)
func isMonotonic(nums []int) bool {
	orderDetected := false
	increasing := false
	temp := nums[0]
	for _, v := range nums {
		if !orderDetected {
			if v > temp {
				increasing = true
				orderDetected = true
			} else if v < temp {
				increasing = false
				orderDetected = true
			}
		} else if (increasing && v < temp) || (!increasing && v > temp) {
			return false
		}
		temp = v
	}
	return true
}
