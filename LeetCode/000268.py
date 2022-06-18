from typing import List


class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        hashmap = {}
        length = len(nums)
        for num in nums:
            hashmap[num] = True
        for i in range(length + 1):
            if hashmap.get(i) is None:
                return i
