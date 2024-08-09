class Solution:
    def numMagicSquaresInside(self, grid: List[List[int]]) -> int:
        
        c = 0
        
        for i in range(len(grid)-2):
            for j in range(len(grid[i])-2):
                r1 = sum(grid[i][j:j+3])
                r2 =  sum(grid[i+1][j:j+3])
                r3 = sum(grid[i+2][j:j+3])
                
                d1 = grid[i][j]+grid[i+1][j+1]+grid[i+2][j+2]
                d2 = grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j]
                
                c1 = grid[i][j]+grid[i+1][j]+grid[i+2][j]
                c2 = grid[i][j+1]+grid[i+1][j+1]+grid[i+2][j+1]
                c3 = grid[i][j+2]+grid[i+1][j+2]+grid[i+2][j+2]
                
                s = set()
                f = False
                
                for k in range(3):
                    for l in range(3):
                        if grid[i+k][j+l] in s or grid[i+k][j+l] > 9:
                            f = True
                            break
                        else:
                            s.add(grid[i+k][j+l])
                if f:
                    continue
                    
                if  r1 == r2 == r3 == c1 == c2 == c3 == d1 == d2 and len(s) == 9 and r1+r2+r3 == 45:
                    c += 1
                
        return c