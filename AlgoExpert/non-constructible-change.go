package main

import "sort"

// O(nlogn)
func NonConstructibleChange(coins []int) int {
	// Sort the array in-place
	sort.Ints(coins)
	change := 0
	for _, v := range coins {
		if v > change+1 {
			break
		} else {
			change += v
		}
	}
	return change + 1
}
