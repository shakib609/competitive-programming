package leetcode

// O(n)
func moveZeroes(nums []int) {
	numsLength := len(nums)
	insertIndex := 0
	zeroesCount := 0
	for i := 0; i < numsLength; i++ {
		if nums[i] != 0 {
			nums[insertIndex] = nums[i]
			insertIndex++
		} else {
			zeroesCount++
		}
	}
	for i := numsLength - zeroesCount; i < numsLength; i++ {
		nums[i] = 0
	}
}
