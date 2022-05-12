from typing import List


class Solution:
    def twoSum_n2(self, nums: List[int], target: int) -> List[int]:
        for i, v in enumerate(nums):
            for j, v2 in enumerate(nums[i+1:], i+1):
                if v + v2 == target:
                    return [i, j]
    
    def twoSum_n(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for i, v in enumerate(nums):
            complement = target - v
            if complement in hashmap:
                return [hashmap[complement], i]
            hashmap[v] = i

    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # return self.twoSum_n2(nums, target)
        return self.twoSum_n(nums, target)
