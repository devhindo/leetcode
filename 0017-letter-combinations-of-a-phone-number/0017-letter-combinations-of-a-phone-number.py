class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        
        d = {
            '2': ['a','b','c'],
            '3': ['d','e','f'],
            '4': ['g','h','i'],
            '5': ['j','k','l'],
            '6': ['m','n','o'],
            '7': ['p','q','r','s'],
            '8': ['t','u','v'],
            '9': ['w','x','y','z']
        }
        
        s = []
        
        def c(v,i):
           
            if not len(digits) or i == len(digits)+1:
                return
            
            if len(v) == len(digits):
                s.append(v)
                return
            
            for e in d[digits[i]]:
                c(v+e,i+1)
            
          
        c('',0)
        
        return s