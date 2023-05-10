def binarySearch(numbers: List[int], target: int) -> int:
    m=0
    s=0
    e=len(numbers)-1
    while s<=e:
        m=(s+e)//2
        if numbers[m]==target:
            return m
        elif numbers[m]<target:
            s=m+1
        else:
            e=m-1
    return -1001
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        for i in range(len(numbers)):
            f = target-numbers[i]
            c = binarySearch(numbers,f)
            if c!=-1001 and c!=i:
                s = [i+1,c+1]
                s.sort()
                break
        return s