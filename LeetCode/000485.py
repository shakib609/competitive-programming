from typing import List


class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        result = 0
        temp_sum = 0
        for v in nums:
            if v == 1:
                temp_sum += 1
                if temp_sum > result:
                    result = temp_sum
            else:
                temp_sum = 0
        return result
