class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        sol = []
        
        def backtrack(s,o,c):
            if len(s) == n*2:
                sol.append(s)
                return
            
            if o<n:
                backtrack(s+"(",o+1,c)
            
            if c<o:
                backtrack(s+")",o,c+1)
            
        
        backtrack("",0,0)
        
        return sol