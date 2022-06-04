package leetcode

// O(n)
func replaceElements(arr []int) []int {
	arrLength := len(arr)
	temp := arr[arrLength-1]
	temp2 := temp
	arr[arrLength-1] = -1
	for i := arrLength - 2; i >= 0; i-- {
		if temp >= arr[i+1] {
			temp2 = arr[i]
			arr[i] = temp
			if temp < temp2 {
				temp = temp2
			}
		} else {
			arr[i] = temp
		}
	}
	return arr
}
