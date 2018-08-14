package main

import (
	"fmt"
	"os"
)

func main() {
	var n, i uint8

	fmt.Scan(&n)

	if n == 1 {
		fmt.Print("-1\n")
		os.Exit(0)
	}

	if n%2 == 0 {
		for i = 1; i <= n; i++ {
			fmt.Print(n-i+1, " ")
		}
	} else {
		fmt.Print(-1)
	}
	fmt.Print("\n")
}
