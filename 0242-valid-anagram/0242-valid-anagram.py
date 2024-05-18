class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        m = [0 for _ in range(26)]
        
        for c in s:
            m[ord(c)-97] += 1
            
        for c in t:
            m[ord(c)-97] -= 1
        
        for e in m:
            if e:
                return False
        
        return True
            