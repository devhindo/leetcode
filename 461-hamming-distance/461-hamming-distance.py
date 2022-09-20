class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        r = x^y
        count = 0
        while(r):
            count += r & 1
            r >>= 1
        return count
    
        