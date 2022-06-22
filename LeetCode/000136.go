package leetcode

func singleNumber(nums []int) int {
	hashmap := make(map[int]int)
	for _, v := range nums {
		hashmap[v] = hashmap[v] + 1
	}
	var result int
	for _, v := range nums {
		if hashmap[v] == 1 {
			result = v
			break
		}
	}
	return result
}
