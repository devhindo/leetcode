class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        
        row = [1] * (rowIndex+1)
        
        for i in range(1,rowIndex):
            
            c = (row[i-1] * (rowIndex - i +1)) // i
            
            row[i] = c
            
        return row
            