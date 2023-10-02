class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        
        s = sum(nums)
        
        if s % 2:
            return False
        
        s = s // 2
        
        d = [[0 for _ in range(s+1)] for _ in range(len(nums))]
        
        for i in range(len(d)):
            for j in range(len(d[i])):
                if i-1>=0:
                    d[i][j] = d[i-1][j]
                    if j-nums[i]>=0:
                        d[i][j] = max(d[i][j],nums[i]+d[i-1][j-nums[i]])
                    
        return d[-1][-1] == s