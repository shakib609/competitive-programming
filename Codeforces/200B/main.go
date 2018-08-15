package main

import (
	"fmt"
)

func main() {
	var n, sum, temp int
	var result float64
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		fmt.Scan(&temp)
		sum += temp
	}
	result = float64(sum) / float64(n)
	fmt.Printf("%.12f\n", result)
}
