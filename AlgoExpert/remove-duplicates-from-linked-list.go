package main

// This is an input struct. Do not edit.
type LinkedList struct {
	Value int
	Next  *LinkedList
}

func RemoveDuplicatesFromLinkedList(linkedList *LinkedList) *LinkedList {
	currentNode := linkedList
	currentValue := currentNode.Value
	node := currentNode
	for {
		node = node.Next
		if node == nil {
			currentNode.Next = nil
			break
		}
		if currentValue == node.Value {
			continue
		} else {
			currentNode.Next = node
			currentNode = node
			currentValue = node.Value
		}
	}
	return linkedList
}
