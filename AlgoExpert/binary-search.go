package main

func BinarySearch(array []int, target int) int {
	i, j := 0, len(array)-1
	for i <= j {
		mid := (i + j) / 2
		value := array[mid]
		if value == target {
			return mid
		} else if value > target {
			j = mid - 1
		} else {
			i = mid + 1
		}
	}
	return -1
}
