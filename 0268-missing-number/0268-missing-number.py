class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        a = [False] * (1+len(nums));
        for n in nums:
            a[n] = True
        for i in range(len(a)):
            if not a[i]:
                return i
        return -1