class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        d = defaultdict(int)
        
        for n in nums:
            d[n] += 1
            
        s = sorted(d.items(), key=lambda item: item[1])
        
        return [item[0] for item in s[-k:]]