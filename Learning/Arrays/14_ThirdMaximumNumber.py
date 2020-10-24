""" 
Given a non-empty array of integers, return the third maximum number in this array. If it does not exist, return the maximum number. The time complexity must be in O(n).
"""
class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        max3 = float('-inf')
        max2 = float('-inf')
        max1 = float('-inf')
        for n in nums:
            if n in (max1,max2,max3):
                continue 
            if n > max1:
                max3 = max2
                max2 = max1
                max1 = n
            elif n > max2:
                max3 = max2
                max2 = n
            elif n > max3:
                max3 = n
        if max3 == float('-inf'):
            return max1
        else:
            return max3