class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        
        dp = [0] * (len(cost)+1)
        
        dp[0], dp[1] = 0, 0
        
        for i in range(2,len(dp)):
            
            two = cost[i-2]+dp[i-2]
            one = cost[i-1]+dp[i-1]
            
            val = one
            
            if one != two:
                val = min(one,two)
                
            dp[i] = val
            
        return dp[len(cost)]