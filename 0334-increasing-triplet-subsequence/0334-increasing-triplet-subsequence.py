class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        
        i = float('inf')
        j = float('inf')
        
        for n in nums:
            if n <= i:
                i = n
            elif n <= j:
                j = n
            else:
                return True
        
        return False