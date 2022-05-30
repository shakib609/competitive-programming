package leetcode

func duplicateZeros(arr []int) {
	totalNums := len(arr)
	for i := 0; i < totalNums; i++ {
		if arr[i] == 0 {
			for j := totalNums - 1; j > i; j-- {
				arr[j] = arr[j-1]
			}
			i++
		}
	}
}
