class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        a = nums.copy()
        a += nums
        return a