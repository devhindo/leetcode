class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        return (n != 0) & ((n & n-1) == 0)
        