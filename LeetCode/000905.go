package leetcode

// O(n)
func sortArrayByParity(nums []int) []int {
	numsLength := len(nums)
	evenPointer := 0
	oddPointer := numsLength - 1
	for evenPointer < oddPointer {
		if nums[evenPointer]%2 == 0 {
			evenPointer++
		} else if nums[oddPointer]%2 == 1 {
			oddPointer--
		} else {
			temp := nums[evenPointer]
			nums[evenPointer] = nums[oddPointer]
			nums[oddPointer] = temp
			evenPointer++
			oddPointer--
		}
	}
	return nums
}
