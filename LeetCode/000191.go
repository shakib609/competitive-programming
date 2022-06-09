package leetcode

func hammingWeight(num uint32) int {
	result := 0
	for num > 0 {
		result += int(num % 2)
		num /= 2
	}
	return result
}
