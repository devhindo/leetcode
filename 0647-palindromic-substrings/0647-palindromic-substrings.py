class Solution:
    def countSubstrings(self, s: str) -> int:
        
        c = 1
        
        for i in range(1,len(s)):
            
            l,r = i, i
            
            while l>=0 and r<len(s) and s[l] == s[r]:
                c += 1
                l -= 1
                r += 1
            
            l,r = i-1, i
            
            while l>=0 and r<len(s) and s[l] == s[r]:
                c += 1
                l -= 1
                r += 1
        
        return c