package main

import (
	"fmt"
)

func main() {
	var cases, n, x, y, i, j, temp uint
	var easy, hard bool

	fmt.Scanf("%d", &cases)
	for i = 0; i < cases; i++ {
		easy = false
		hard = false
		fmt.Scanf("%d %d %d", &n, &x, &y)
		for j = 0; j < n; j++ {
			fmt.Scanf("%d", &temp)
			if j == 0 && temp == x {
				easy = true
			} else if j == n-1 && temp == y {
				hard = true
			} else {
				continue
			}
		}
		if easy && hard {
			fmt.Println("BOTH")
		} else if easy {
			fmt.Println("EASY")
		} else if hard {
			fmt.Println("HARD")
		} else {
			fmt.Println("OKAY")
		}
	}
}
