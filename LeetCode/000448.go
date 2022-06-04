package leetcode

// O(n)
func findDisappearedNumbers(nums []int) []int {
	numsLength := len(nums)
	indexArr := make([]bool, numsLength)
	for _, v := range nums {
		indexArr[v-1] = true
	}
	count := 0
	for _, v := range indexArr {
		if !v {
			count++
		}
	}
	resultArr := make([]int, count)
	ii := 0
	for i, v := range indexArr {
		if !v {
			resultArr[ii] = i + 1
			ii++
		}
	}
	return resultArr
}
