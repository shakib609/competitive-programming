from typing import List

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        result = []
        for i, num in enumerate(nums):
            value = num
            if i > 0:
                value += result[i - 1]
            result.append(value)
        return result
