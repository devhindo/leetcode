class Solution:
    def concatenatedBinary(self, n: int) -> int:
        r = ""
        for x in range(1,n+1):
            r += format(x,"b");
        m = 109 + 7
        return int(r,2) % (1000000000 + 7);
        