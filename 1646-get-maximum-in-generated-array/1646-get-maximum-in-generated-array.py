class Solution:
    def getMaximumGenerated(self, n: int) -> int:
        
        l = [0] * (n+1)
        
        if len(l) >= 2:
            l[1] = 1
        
        for i in range(1,len(l)//2+1):
            
            if 2 <= 2*i <= n:
                l[2*i] = l[i]
            
            if 2 <= 2*i+1 <= n:
                l[2*i+1] = l[i] + l[i+1]

        return max(l)