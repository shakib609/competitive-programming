package main

import (
	"fmt"
	"strings"
)

func main() {
	var a, b string
	var length, result int
	fmt.Scanln(&a)
	fmt.Scanln(&b)
	a, b = strings.ToLower(a), strings.ToLower(b)
	length = len(a)

	for i := 0; i < length; i++ {
		if a[i] > b[i] {
			result = 1
			break
		} else if a[i] < b[i] {
			result = -1
			break
		}
	}

	fmt.Println(result)
}
