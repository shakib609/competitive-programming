from typing import Optional

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        n1 = Solution.linkedListToInt(l1)
        n2 = Solution.linkedListToInt(l2)
        result = n1 + n2
        print(result)
        return Solution.intToLinkedList(result)

    @staticmethod
    def linkedListToInt(head: Optional[ListNode]):
        result = 0
        multiplier = 1
        node = head
        while node is not None:
            result += node.val * multiplier
            multiplier *= 10
            node = node.next
        return result

    @staticmethod
    def intToLinkedList(num: int):
        head = ListNode()
        node = head
        while True:
            node.val = num % 10
            num = num // 10
            if num == 0:
                break
            node.next = ListNode()
            node = node.next
        return head
    