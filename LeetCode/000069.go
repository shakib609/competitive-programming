package leetcode

// O(logn)
func mySqrt(x int) int {
	start := 0
	end := x
	prev_mid := 0
	mid := x
	for prev_mid != mid {
		prev_mid = mid
		mid = (start + end) / 2
		sqr := mid * mid
		if sqr == x {
			return mid
		} else if sqr > x {
			end = mid - 1
		} else {
			start = mid + 1
		}
	}
	return mid
}
