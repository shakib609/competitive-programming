package leetcode

// O(n^2) | O(1)
func containsDuplicate_n2(nums []int) bool {
	for i, v := range nums {
		for j := i + 1; j < len(nums); j++ {
			if v == nums[j] {
				return true
			}
		}
	}
	return false
}

// O(n) | O(n)
func containsDuplicate_n(nums []int) bool {
	hashmap := make(map[int]bool)
	for _, v := range nums {
		if _, ok := hashmap[v]; ok {
			return true
		}
		hashmap[v] = true
	}
	return false
}

func containsDuplicate(nums []int) bool {
	return containsDuplicate_n(nums)
}
