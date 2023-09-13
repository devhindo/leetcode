class Solution:
    def rob(self, nums: List[int]) -> int:
        
        
        def h(nums):
            r1, r2 = 0,0
        
            for n in nums:
                t = r2
            
                r2 = max(r2,r1+n)
                r1 = t
                
            return r2
        
        return max(nums[0],h(nums[1:]),h(nums[:-1])) 