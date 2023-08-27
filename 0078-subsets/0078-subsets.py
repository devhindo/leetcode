class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
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
        