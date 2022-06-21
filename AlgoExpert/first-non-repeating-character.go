package main

// O(n)
func FirstNonRepeatingCharacter(str string) int {
	hashmap := make(map[byte]int)
	strLength := len(str)
	for i := 0; i < strLength; i++ {
		currentByte := str[i]
		hashmap[currentByte] = hashmap[currentByte] + 1
	}
	for i := 0; i < strLength; i++ {
		currentByte := str[i]
		if hashmap[currentByte] == 1 {
			return i
		}
	}
	return -1
}
