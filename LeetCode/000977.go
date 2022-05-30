package leetcode

import "math"

func sortedSquares(nums []int) []int {
	totalNums := len(nums)
	result := make([]int, totalNums)
	i, j := 0, totalNums-1
	resultIndex := j
	for i <= j {
		if math.Abs(float64(nums[i])) > math.Abs(float64(nums[j])) {
			result[resultIndex] = nums[i] * nums[i]
			i += 1
		} else {
			result[resultIndex] = nums[j] * nums[j]
			j -= 1
		}
		resultIndex -= 1
	}
	return result
}
