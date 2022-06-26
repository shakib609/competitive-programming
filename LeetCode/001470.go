package leetcode

// O(n)
func shuffle(nums []int, n int) []int {
	result := make([]int, 2*n)
	for i := 0; i < n; i++ {
		result[i*2] = nums[i]
	}
	for i, j := n, 0; i < 2*n; i++ {
		result[((j+1)*2)-1] = nums[i]
		j++
	}
	return result
}
