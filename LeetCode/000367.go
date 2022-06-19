package leetcode

func isPerfectSquareLoop(num int) bool {
	for i := 0; ; i++ {
		squaredValue := i * i
		if squaredValue == num {
			return true
		} else if squaredValue > num {
			break
		}
	}
	return false
}

func isPerfectSquareBinarySearch(num int) bool {
	start, end := 0, num
	for start <= end {
		guess := (start + end) / 2
		squaredValue := guess * guess
		if squaredValue == num {
			return true
		} else if squaredValue > num {
			end = guess - 1
		} else if squaredValue < num {
			start = guess + 1
		}
	}
	return false
}
func isPerfectSquare(num int) bool {
	return isPerfectSquareBinarySearch(num)
}
