package leetcode

// O(n)
func percentageLetter(s string, letter byte) int {
	length := len(s)
	letterCount := 0
	for i := 0; i < length; i++ {
		if s[i] == letter {
			letterCount++
		}
	}
	return (letterCount * 100) / length
}
