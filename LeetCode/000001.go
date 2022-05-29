package twoSum

func twoSum_n2(nums []int, target int) []int {
	totalNums := len(nums)
	result := make([]int, 2)
	for i := 0; i < totalNums; i++ {
		for j := i + 1; j < totalNums; j++ {
			if nums[i]+nums[j] == target {
				result[0] = i
				result[1] = j
				return result
			}
		}
	}
	return result
}

func twoSum_n(nums []int, target int) []int {
	totalNums := len(nums)
	hashmap := map[int]int{}
	result := make([]int, 2)
	for i := 0; i < totalNums; i++ {
		complement := target - nums[i]
		if _, exists := hashmap[complement]; exists {
			result[0] = i
			result[1] = hashmap[complement]
			break
		} else {
			hashmap[nums[i]] = i
		}
	}
	return result
}

func twoSum(nums []int, target int) []int {
	return twoSum_n(nums, target)
}
