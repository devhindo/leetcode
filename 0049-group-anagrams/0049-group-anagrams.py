class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        x = defaultdict(list)
        
        for s in strs:
            
            d = [0] * 26

            for c in s:
                d[ord(c)-ord("a")] += 1
            
            
                
            x[tuple(d)].append(s)
            
            
        return x.values()