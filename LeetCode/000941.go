package leetcode

func validMountainArray(arr []int) bool {
	increasing := true
	arrLength := len(arr)
	if arrLength < 3 || arr[1] <= arr[0] {
		return false
	}
	for i := 1; i < arrLength; i++ {
		if arr[i] == arr[i-1] {
			return false
		} else if increasing && arr[i] < arr[i-1] && i < arrLength {
			increasing = false
		} else if !increasing && arr[i] > arr[i-1] {
			return false
		}
	}
	return !increasing
}
