class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        # backtracking solution
        sol = []
        def backtrack(subset,i):
            if i==len(nums):
                sol.append(subset)
                return
            backtrack(subset,i+1)
            backtrack(subset+[nums[i]],i+1)

        
        backtrack([],0)
        return sol
        
        # bit manipulation solution
        """
        bit = pow(2,len(nums))-1
        l = len(nums)-1
        sol = []
        sol.append([])
        while bit:
            subset = []
            subbit = bit
            
            while subbit:
                if subbit & 1:
                    subset.append(nums[l])
                l -= 1
                subbit >>= 1
            
            l = len(nums)-1
            sol.append(subset)
            bit -= 1
        return sol
        """