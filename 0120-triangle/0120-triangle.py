class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        
        d = triangle.copy()
        
        for i in range(1,len(triangle)):
            for j in range(len(triangle[i])):
    
                if j == 0:
                    d[i][j] = triangle[i][j] + d[i-1][j]
                
                elif j == len(d[i-1]):
                    d[i][j] = triangle[i][j] + d[i-1][j-1]
                
                else:
                    d[i][j] = triangle[i][j] + min(d[i-1][j],d[i-1][j-1])

                    
                    
        return min(d[-1])