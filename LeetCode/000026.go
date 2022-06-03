package leetcode

// O(n)
func removeDuplicates(nums []int) int {
	result := 1
	insertIndex := 1
	currentValue := nums[0]
	for i := 1; i < len(nums); i++ {
		if nums[i] > currentValue {
			result++
			currentValue = nums[i]
			nums[insertIndex] = currentValue
			insertIndex++
		}
	}
	return result
}
