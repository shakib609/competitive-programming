package main

import "sort"

// O(n^2)
func TwoNumberSum_n2(array []int, target int) []int {
	arrayLength := len(array)
	for i, v := range array {
		complement := target - v
		for j := i + 1; j < arrayLength; j++ {
			if array[j] == complement {
				return []int{v, array[j]}
			}
		}
	}
	return make([]int, 0)
}

// O(n)
func TwoNumberSum_n(array []int, target int) []int {
	hashmap := make(map[int]int)
	for i, v := range array {
		complement := target - v
		if _, ok := hashmap[complement]; ok {
			return []int{v, complement}
		}
		hashmap[v] = i
	}
	return []int{}
}

// O(nlog(n))
func TwoNumberSum_nlogn(array []int, target int) []int {
	arrayLength := len(array)
	left, right := 0, arrayLength-1
	sort.Ints(array)
	for left < right {
		leftElement, rightElement := array[left], array[right]
		total := leftElement + rightElement
		if total == target {
			return []int{leftElement, rightElement}
		} else if total > target {
			right--
		} else {
			left++
		}
	}
	return []int{}
}

func TwoNumberSum(array []int, target int) []int {
	return TwoNumberSum_n(array, target)
}
