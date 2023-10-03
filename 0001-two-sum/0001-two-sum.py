class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        s = {}
        
        for i in range(len(nums)):
            
            if target-nums[i] in s:
                return [i,s[target-nums[i]]]
            
            s[nums[i]] = i
        
            