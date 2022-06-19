package leetcode

import "fmt"

// O(n)
func fizzBuzz(n int) []string {
	result := make([]string, n)
	for i := 1; i <= n; i++ {
		if i%15 == 0 {
			result[i-1] = "FizzBuzz"
		} else if i%5 == 0 {
			result[i-1] = "Buzz"
		} else if i%3 == 0 {
			result[i-1] = "Fizz"
		} else {
			result[i-1] = fmt.Sprintf("%d", i)
		}
	}
	return result
}
