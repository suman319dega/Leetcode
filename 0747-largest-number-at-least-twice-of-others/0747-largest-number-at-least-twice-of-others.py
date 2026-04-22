class Solution(object):
    def dominantIndex(self, nums):
        if len(nums) == 1:
            return 0
        n = len(nums) - 1
        count = 0
        for i in range(len(nums)):
            for j in range(len(nums)):
                if (i != j):
                    p = nums[j] * 2 
                    if (nums[i] >= p):
                        count = count + 1
            if (count == n):
                return i
            count = 0
            
        return -1
                
        