class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        
        l = {}
        
        for e in edges:
            if e[0] not in l:
                l[e[0]] = []
            l[e[0]].append(e[1])
            if e[1] not in l:
                l[e[1]] = []
            l[e[1]].append(e[0])
            
        n = len(l)
        
        degree = [0] * (n+1)
        
        leafs = []
        
        for nod,el in l.items():
            degree[nod] = len(el)
            if degree[nod] <= 1:
                leafs.append(nod)
                degree[nod] = 0
        
        c = len(leafs)
        
        while c < n:
            
            newleafs = []
            
            for n in leafs:
                for a in l[n]:
                    degree[a] -= 1
                    if degree[a] == 1:
                        newleafs.append(a)
            
                degree[n] = 0
            c += len(newleafs)
            leafs = newleafs
        
        return leafs[0]
        
      
    
        
        
        