package leetcode

// O(n)
func checkIfExist(arr []int) bool {
	hashmap := make(map[int]int)
	for i, value := range arr {
		if v, exists := hashmap[value*2]; exists && v != i {
			return true
		}
		if v, exists := hashmap[value/2]; exists && v != i && value%2 == 0 {
			return true
		}
		hashmap[value] = i
	}
	return false
}
