from typing import List


class Solution:
    def get_digit_count(self, n: int) -> int:
        result = 0
        temp = n
        while True:
            result += 1
            temp = temp // 10
            if temp == 0:
                break
        return result

    def findNumbers(self, nums: List[int]) -> int:
        result = 0
        for n in nums:
            if self.get_digit_count(n) % 2 == 0:
                result += 1
        return result
