package main

import (
	"fmt"
)

func main() {
	var k, l, m, n, d, i, result uint32
	var dragons [100001]bool

	result = 0
	fmt.Scan(&k)
	fmt.Scan(&l)
	fmt.Scan(&m)
	fmt.Scan(&n)
	fmt.Scan(&d)

	for i = 1; i <= d; i++ {
		if !dragons[i] {
			if i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0 {
				dragons[i] = true
			}
		}
	}

	for i = 1; i <= d; i++ {
		if dragons[i] {
			result++
		}
	}
	fmt.Println(result)
}
