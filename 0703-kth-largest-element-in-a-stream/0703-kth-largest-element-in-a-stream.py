class KthLargest:
    l = []
    i = 0
    def __init__(self, k: int, nums: List[int]):
        self.i = k
        self.l = nums
        self.l.sort()
        

    def add(self, val: int) -> int:
        self.l.append(val)
        self.l.sort()
        return self.l[-self.i]


# Your KthLargest object will be instantiated and called as such:
# obj = KthLargest(k, nums)
# param_1 = obj.add(val)