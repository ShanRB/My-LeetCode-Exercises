""" 
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
"""
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        count = 0
        while 0 in nums:
            nums.remove(0)
            count += 1
        nums += [0] * count