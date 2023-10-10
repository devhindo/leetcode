class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        r = {}
        c = {}
        
        for i in range(0,9):
            r[i] = set()
            c [i] = set()
        
        for i in range(3):
            for j in range(3):
                s = set()
                for k in range(3):
                    for l in range(3):
                        if board[i*3+k][j*3+l] == '.':
                            continue
                        if board[i*3+k][j*3+l] in s:
                            return False
                        else:
                            s.add(board[i*3+k][j*3+l])
                            
                            if board[i*3+k][j*3+l] in r[i*3+k]:
                                return False
                            else:
                                r[i*3+k].add(board[i*3+k][j*3+l])
                            
                            if board[i*3+k][j*3+l] in c[j*3+l]:
                                return False
                            else:
                                c[j*3+l].add(board[i*3+k][j*3+l])         
        
        return True
                