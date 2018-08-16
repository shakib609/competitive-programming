package main

import (
	"fmt"
)

func main() {
	var n, time, left, right, leftZeros, leftOnes, rightZeros, rightOnes uint16

	fmt.Scan(&n)

	for i := 0; i < int(n); i++ {
		fmt.Scan(&left)
		fmt.Scan(&right)

		switch left {
		case 1:
			leftOnes++
			break
		default:
			leftZeros++
		}

		switch right {
		case 1:
			rightOnes++
			break
		default:
			rightZeros++
		}
	}

	if leftZeros > leftOnes {
		time = leftOnes
	} else {
		time = leftZeros
	}

	if rightZeros > rightOnes {
		time += rightOnes
	} else {
		time += rightZeros
	}

	fmt.Println(time)
}
