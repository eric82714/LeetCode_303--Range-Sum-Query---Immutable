class NumArray:

    def __init__(self, nums: List[int]):
        if not nums: return
        
        self.histArray = nums
        for i in range(1, len(nums)):
            self.histArray[i] += self.histArray[i-1] 

    def sumRange(self, i: int, j: int) -> int:
        if i == 0: return self.histArray[j]
        return self.histArray[j] - self.histArray[i-1]


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(i,j)
