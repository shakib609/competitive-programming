package main

import (
	"fmt"
)

func main() {
	var n, k, l, c, d, p, nl, np, result uint32
	fmt.Scan(&n)
	fmt.Scan(&k)
	fmt.Scan(&l)
	fmt.Scan(&c)
	fmt.Scan(&d)
	fmt.Scan(&p)
	fmt.Scan(&nl)
	fmt.Scan(&np)

	totalDrinks := k * l
	toasts := totalDrinks / nl
	limes := c * d
	salts := p / np

	if toasts < limes {
		if toasts < salts {
			result = toasts
		} else {
			result = salts
		}
	} else {
		if limes < salts {
			result = limes
		} else {
			result = salts
		}
	}
	result /= n
	fmt.Println(result)
}
