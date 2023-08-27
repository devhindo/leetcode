class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        
        sol = []
        
        def backtrack(s, st):
            
            if len(s) == len(nums):
                sol.append(s)
                return
            
            for e in st:
                nst = st.copy()
                nst.remove(e)
                backtrack(s+[e],nst)
        
        st = set(nums)
        backtrack([],st)
        
        return sol
        