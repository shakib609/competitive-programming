package main

// O(n+m)
func GenerateDocument(characters string, document string) bool {
	hashmap := make(map[byte]int)
	for i := 0; i < len(characters); i++ {
		currentByte := characters[i]
		hashmap[currentByte] = hashmap[currentByte] + 1
	}

	for i := 0; i < len(document); i++ {
		currentByte := document[i]
		if hashmap[currentByte] == 0 {
			return false
		}
		hashmap[currentByte] -= 1
	}
	return true
}
