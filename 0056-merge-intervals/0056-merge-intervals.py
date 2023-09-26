class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        
        if len(intervals) == 1:
            return intervals
        
        intervals.sort(key= lambda x:x[0])
        
        l = []
        
        for i in range(1,len(intervals)):
            
            if intervals[i-1][0] <= intervals[i][1] and intervals[i][0] <= intervals[i-1][1]:
                n = [min(intervals[i-1][0],intervals[i][0]),max(intervals[i-1][1],intervals[i][1])]
                intervals[i] = n

            else:
                l.append(intervals[i-1])

                    
            if i==len(intervals)-1:
                l.append(intervals[i])
                    
        return l