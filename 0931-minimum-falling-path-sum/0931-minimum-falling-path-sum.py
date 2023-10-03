class Solution:
    def minFallingPathSum(self, matrix: List[List[int]]) -> int:
        
        d = matrix.copy()
        
        for i in range(1,len(matrix)):
            for j in range(len(matrix[i])):
                
                a = d[i-1][j]
                
                if j-1 >= 0:
                    a = min(a,d[i-1][j-1])
                    
                if j+1 != len(matrix[i]):
                    a = min(a,d[i-1][j+1])
                    
                d[i][j] += a
                
        return min(d[-1])