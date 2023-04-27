class Solution:
    def mergeSort(self, nums: List[int]) -> List[int]:
        if len(nums)==1:
           return nums
        n = len(nums)
        arr1 = nums[:n//2]
        arr2 = nums[n//2:]
        arr1 = self.mergeSort(arr1)
        arr2 = self.mergeSort(arr2)
        return self.merge(arr1,arr2)
        
    def merge(self, arr1: List[int], arr2: List[int]) -> List[int]:
        arr = []
        i=0
        j=0
        while i!=len(arr1) and j!=len(arr2):
            if arr1[i] < arr2[j]:
                arr.append(arr1[i])
                i+=1
            else:
                arr.append(arr2[j])
                j+=1
        while i!=len(arr1):
            arr.append(arr1[i])
            i+=1
        while j!=len(arr2):
            arr.append(arr2[j])
            j+=1
        return arr
    def sortArray(self, nums: List[int]) -> List[int]:
        return self.mergeSort(nums)
        