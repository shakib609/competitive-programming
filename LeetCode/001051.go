package leetcode

import "sort"

// O(nlogn)
func heightChecker(heights []int) int {
	expectedHeights := make([]int, len(heights))
	copy(expectedHeights, heights)
	sort.Ints(expectedHeights)
	result := 0
	for i, v := range heights {
		if v != expectedHeights[i] {
			result++
		}
	}
	return result
}
