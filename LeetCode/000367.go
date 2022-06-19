package leetcode

func isPerfectSquare(num int) bool {
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
