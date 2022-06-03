package leetcode

// O(n)
func removeElement(nums []int, val int) int {
	result := len(nums)
	i := 0
	j := result - 1
	for i <= j {
		if nums[j] == val {
			result--
			j--
		} else if nums[i] == val {
			result--
			nums[i] = nums[j]
			i++
			j--
		} else {
			i++
		}
	}
	return result
}
