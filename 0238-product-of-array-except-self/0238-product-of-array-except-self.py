class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        
        p = 1
        z1 = False
        a = [0] * len(nums)

        
        for i in range(len(nums)):
            if nums[i] == 0 and z1:
                return a
            if nums[i] == 0 and z1 == False:
                z1 = True
                zi = i
                continue
        
            
            p *= nums[i]
        
        
        if z1:
            a[zi] = p
            return a

        
        
        for i in range(len(nums)):
            if z1 and not nums[i]:
                a[i] = p
                return a
            
            tmp = nums[i]
            
            a[i] = int(p/nums[i])
                
        return a