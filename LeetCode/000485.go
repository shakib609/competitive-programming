package leetcode

func findMaxConsecutiveOnes(nums []int) int {
	result := 0
	temp_sum := 0

	for _, v := range nums {
		if v == 0 {
			temp_sum = 0
		} else {
			temp_sum += 1
			if temp_sum > result {
				result = temp_sum
			}
		}
	}
	return result
}
