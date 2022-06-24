package main

import "sort"

func FindThreeLargestNumbers(array []int) []int {
	result := []int{array[0], array[1], array[2]}
	sort.Ints(result)
	for i := 3; i < len(array); i++ {
		val := array[i]
		if val > result[2] {
			result[0], result[1] = result[1], result[2]
			result[2] = val
		} else if val > result[1] {
			result[0] = result[1]
			result[1] = val
		} else if val > result[0] {
			result[0] = val
		}
	}
	return result
}
