import sys
class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        
        dp = [2 ** 63 - 1] * (amount+1)
        dp[0] = 0
        
        for n in range(1,amount+1):
            t = 2 ** 63 - 1
            for c in coins:
                if n-c>=0:
                    t = min(t,dp[n-c]+1)

            dp[n] = t
        
        
        return -1 if dp[amount] == 2 ** 63 - 1 else dp[amount] 