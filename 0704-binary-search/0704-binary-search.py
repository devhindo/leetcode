class Solution:
    def search(self, nums: List[int], target: int) -> int:
        s=0
        e=len(nums)-1
        m=0
        while s<=e:
            m=int((s+e)/2)
            if nums[m]==target: return m
            elif nums[m]<target: s=m+1
            else: e=m-1
        return -1
        