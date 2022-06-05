package leetcode

// O(n)
func thirdMax(nums []int) int {
	max := nums[0]
	secondMax := nums[0]
	thirdMax := nums[0]
	for _, v := range nums {
		if v > max {
			thirdMax = secondMax
			secondMax = max
			max = v
		} else if max == secondMax && v < secondMax {
			secondMax = v
			thirdMax = v
		} else if v < max && v > secondMax {
			thirdMax = secondMax
			secondMax = v
		} else if secondMax == thirdMax && v < thirdMax {
			thirdMax = v
		} else if v < secondMax && v > thirdMax {
			thirdMax = v
		}
	}
	if thirdMax == secondMax {
		return max
	}
	return thirdMax
}
