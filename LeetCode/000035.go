package leetcode

// O(logn)
func searchInsert(nums []int, target int) int {
	i, j := 0, len(nums)-1
	result := (i + j) / 2
	for i <= j {
		result = (i + j) / 2
		if nums[result] == target {
			return result
		} else if nums[result] > target {
			j = result - 1
		} else {
			i = result + 1
		}
	}
	if nums[result] < target {
		return result + 1
	}
	return result
}
