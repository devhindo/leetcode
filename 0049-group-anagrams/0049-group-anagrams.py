class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        d = {}
        
        for i in range(len(strs)):
            st = str(sorted(strs[i]))
                    
            if st not in d:
               d[st] = []
            
            d[st].append(strs[i])
            
        a = []
        
        for e in d:
            a.append(d[e])
            
        return a
        