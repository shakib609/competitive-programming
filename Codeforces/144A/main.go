package main

import (
	"fmt"
)

func main() {
	var n, time, max, min uint8
	var soldiers [100]uint8
	time, max, min = 0, 0, 100
	max_index, min_index := -1, -1

	fmt.Scan(&n)

	for i := 0; uint8(i) < n; i++ {
		fmt.Scan(&soldiers[i])
		if soldiers[i] > max {
			max = soldiers[i]
			max_index = i
		}
		if soldiers[i] <= min {
			min = soldiers[i]
			min_index = i
		}
	}

	if max_index > min_index {
		time = uint8(max_index) + (n - uint8(min_index) - 1) - 1
	} else {
		time = (uint8(max_index)) + (n - uint8(min_index) - 1)
	}
	fmt.Println(time)
}
