class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        maxlength = 0
        length = 0
        for i in nums:
            if i != 1:
                length = 0          
            else:
                length += 1
                if maxlength < length:
                    maxlength = length
        return maxlength
