package leetcode

// O(n) | O(n)
func missingNumber(nums []int) int {
	length := len(nums)
	hashmap := make(map[int]bool)
	for _, v := range nums {
		hashmap[v] = true
	}
	result := 0
	for i := 0; i <= length; i++ {
		if _, exists := hashmap[i]; !exists {
			result = i
			break
		}
	}
	return result
}
