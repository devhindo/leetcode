class Solution:
    def longestPalindrome(self, s: str) -> str:
        
        t = 0
        b = ""
        
        for i in range(len(s)):
         
            l, r = i, i
            
            while l>=0 and r < len(s) and s[l] == s[r]:
                
                if r-l+1 > t:
                    b = s[l:r+1]
                    t = r-l+1
                
                l -= 1
                r += 1
            
            l, r = i, i+1
            
            while l>=0 and r < len(s) and s[l] == s[r]:
                
                if r-l+1 > t:
                    b = s[l:r+1]
                    t = r-l+1
                
                l -= 1
                r += 1
            
        return b