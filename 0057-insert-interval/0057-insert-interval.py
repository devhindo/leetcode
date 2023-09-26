class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        
        if not len(intervals):
            return [newInterval]
        
        i = 0
        
        while i<len(intervals) and intervals[i][0] < newInterval[0]:    
            i += 1
        
        if i == len(intervals):
            intervals.append(newInterval)
        else:
            intervals.insert(i,newInterval)
        
        i = 1 if not i else i
        
        x = len(intervals)
        
        f = False
        
        while i<x:
            
            if intervals[i-1][0] <= intervals[i][1] and intervals[i][0] <= intervals[i-1][1]:
                
                intervals[i] = [min(intervals[i-1][0],intervals[i][0]),max(intervals[i-1][1],intervals[i][1])]
                del intervals[i-1]

                x = len(intervals)
                
            else:
                if f:
                    break
                f = True
                i += 1
                
        return intervals
                
                
        