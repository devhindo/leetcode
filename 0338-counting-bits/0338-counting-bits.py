class Solution:
    def countBits(self, n: int) -> List[int]:
        a = []
        for i in range(n+1):
            x = i
            c = 0
            while x:
                if x&1:
                    c += 1
                x >>= 1    
            a.append(c)
        return a
                    
        