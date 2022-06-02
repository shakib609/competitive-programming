package main

// O(n)
func IsValidSubsequence(array []int, sequence []int) bool {
	i := 0
	j := 0
	for i < len(array) && j < len(sequence) {
		if array[i] == sequence[j] {
			j++
		}
		i++
	}
	return j == len(sequence)
}
