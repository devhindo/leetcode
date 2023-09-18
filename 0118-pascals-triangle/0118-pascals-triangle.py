class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        
        pascal = []
        
        for i in range(1,numRows+1):
            
            row = [1] * i
            
            k = 0
            for j in range(1,i-1):
                row[j] = pascal[i-2][j-1] + pascal[i-2][j]
            
            pascal.append(row)
            
        return pascal
        