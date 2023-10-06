class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        
        # j , n-i-1
        # that's what I call an algorithm
        
        def x(i,j,k,v):
            
            if not k:
                matrix[i][j] = v
                return
            
            x(j, len(matrix)-i-1, k-1, matrix[i][j])
            matrix[i][j] = v
                    
        l, r, i = 0, len(matrix)-1, 0
        
        while l < r:
            for j in range(l,r):
                x(j, len(matrix)-i-1, 3, matrix[i][j])
            
            i += 1
            
            r -= 1
            l += 1
            
            


            