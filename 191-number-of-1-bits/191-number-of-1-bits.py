class Solution:
    def hammingWeight(self, n: int) -> int:
        bits = 0
        while(n):
            bits += n & 1
            n >>= 1
        return bits