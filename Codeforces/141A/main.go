package main

import (
	"fmt"
	"os"
)

func main() {
	var a, b, c string
	m := make(map[rune]uint8)
	all := make(map[rune]uint8)
	result := true

	fmt.Scanln(&a)
	fmt.Scanln(&b)
	fmt.Scanln(&c)

	lenA, lenB, lenC := len(a), len(b), len(c)

	if lenA+lenB != lenC {
		fmt.Println("NO")
		os.Exit(0)
	}

	for _, v := range a {
		_, present := m[v]
		if present {
			m[v]++
		} else {
			m[v] = 1
		}
	}

	for _, v := range b {
		_, present := m[v]
		if present {
			m[v]++
		} else {
			m[v] = 1
		}
	}

	for _, v := range c {
		_, present := all[v]
		if present {
			all[v]++
		} else {
			all[v] = 1
		}
	}

	for k, v := range all {
		if m[k] != v {
			result = false
			break
		}
	}

	if result {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}

}
