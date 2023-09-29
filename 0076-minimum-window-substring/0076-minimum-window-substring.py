class Solution:
    def minWindow(self, s: str, t: str) -> str:
        
        w = {}
        
        for c in t:
            if c not in w:
                w[c] = 1
            else:
                w[c] += 1
                
        def isIn(w,d):
            for e in w:
                if e not in d:
                    return False
                if w[e] > d[e]:
                    return False
            return True
        
        a, b = 0,0
        
        d = {}
        
        m = ""
        l = pow(10,5)
        
        while b<=len(s):
            
            if isIn(w,d):
                if b-a < l:
                    l = b-a
                    m = s[a:b]
                d[s[a]] -= 1
                a += 1
            
            else:
                if b == len(s):
                    break
                if s[b] not in d:
                    d[s[b]] = 1
                else:
                    d[s[b]] += 1
                b += 1
        
        return m
            