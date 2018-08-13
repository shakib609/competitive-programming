package main

import "fmt"

func main() {
	var shoes [4]uint32
	var result uint8 = 0
	m := make(map[uint32]uint8)

	for i := 0; i < 4; i++ {
		fmt.Scan(&shoes[i])
		temp := shoes[i]
		_, present := m[temp]
		if present {
			m[temp]++
		} else {
			m[temp] = 1
		}
	}

	for _, v := range m {
		if v > 1 {
			result += v - 1
		}
	}
	fmt.Println(result)
}
