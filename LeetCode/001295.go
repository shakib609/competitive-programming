package leetcode

func getDigitCount(n int) int {
	count := 0
	for {
		div := n / 10
		count += 1
		if div <= 0 {
			break
		} else {
			n = div
		}
	}
	return count
}

func findNumbers(nums []int) int {
	result := 0
	for _, v := range nums {
		digitCount := getDigitCount(v)
		if digitCount%2 == 0 {
			result += 1
		}
	}
	return result
}
