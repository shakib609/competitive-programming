package main

// O(n^2)
func BubbleSort(array []int) []int {
	length := len(array)
	for i := 0; i < length; i++ {
		for j := i + 1; j < length; j++ {
			value := array[i]
			if value > array[j] {
				temp := array[j]
				array[j] = value
				array[i] = temp
			}
		}
	}
	return array
}
