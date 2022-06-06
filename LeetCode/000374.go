package leetcode

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * func guess(num int) int;
 */
func guess(num int) int {
	// This function is provided under the hood by leetcode
	return 0
}

func guessNumber(n int) int {
	start := 0
	end := n
	for start <= end {
		mid := (start + end) / 2
		guessOutput := guess(mid)
		if guessOutput == 0 {
			return mid
		} else if guessOutput == -1 {
			end = mid - 1
		} else {
			start = mid + 1
		}
	}
	return -1
}
