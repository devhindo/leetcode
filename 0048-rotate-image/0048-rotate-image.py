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
            
            x(j, len(matrix)-i-1, k-1,matrix[i][j])
            matrix[i][j] = v
            
        i, j, r, b, d = 0, 0, len(matrix)//2, len(matrix)-1, 0
        
        
        while r:
            while j < b:
                x(j,len(matrix)-1-i,3,matrix[i][j])
                j += 1
                
            r -= 1
            i += 1
            b -= 1
            d += 1
            j = d
            

            