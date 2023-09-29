class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        
        if len(nums) == 1:
            return 1 if nums[0] >= target else 0
        
        ans = pow(10,9)
        
        a, b, c = 0, 0, 0
        
        while b<=len(nums):
            
            if c >= target:
                ans = min(ans,b-a)
                c -= nums[a]
                a += 1
                
            else:

                if b == len(nums):
                    break          
                c += nums[b]
                b += 1
        
        return 0 if ans == pow(10,9) else ans