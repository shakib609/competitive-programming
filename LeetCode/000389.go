package leetcode

func findTheDifference(s string, t string) byte {
	var sum1 uint = 0
	var sum2 uint = 0

	sLength := len(s)
	tLength := sLength + 1

	for i := 0; i < tLength; i++ {
		sum2 += uint(t[i])
		if i < sLength {
			sum1 += uint(s[i])
		}
	}
	return byte(sum2 - sum1)
}
