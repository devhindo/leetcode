class Solution:
    def rob(self, nums: List[int]) -> int:
        
        r1, r2 = 0,0
        
        for n in nums:
            t = r2
            r2 = max(r2,r1+n)
            r1 = t
        
        return r2

"""
class Solution:
    def rob(self, nums: List[int]) -> int:
        
        dp = [0] * (len(nums)+2)
        
        for i in range(2,len(dp)):    
            dp[i] = max(dp[i-1],dp[i-2]+nums[i-2])
        
        return dp[-1]
"""