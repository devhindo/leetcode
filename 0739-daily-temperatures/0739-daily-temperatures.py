class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        
        a = [0] * len(temperatures)
        
        for i in range(len(temperatures)-2,-1,-1):
            
            if temperatures[i+1] > temperatures[i]:
                a[i] = 1
                
            elif not a[i+1]:
                a[i] = 0
            else:
                k = a[i+1]
                
                while temperatures[i+1+k] <= temperatures[i]:
                    if not a[i+1+k] and temperatures[i+1+k] <= temperatures[i]:
                        break
                    k += a[i+1+k]

                if not a[i+1+k] and temperatures[i+1+k] <= temperatures[i]:
                    continue
                    
                a[i] = k+1
                
        return a