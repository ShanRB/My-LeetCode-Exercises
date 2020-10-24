""" 
Given two arrays of integers nums and index. Your task is to create target array under the following rules:

Initially target array is empty.
From left to right read nums[i] and index[i], insert at index index[i] the value nums[i] in target array.
Repeat the previous step until there are no elements to read in nums and index.
Return the target array.

It is guaranteed that the insertion operations will be valid.
"""
from typing import List
class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        
        def insert(source,target):
            if source == target:
                return
            if source > target:
                temp = nums[source]
                for i in range(source,target,-1):
                    print(i,'--',nums)
                    nums[i] = nums[i-1]
                    print(i,'**',nums)
                nums[target] = temp
            else:
                temp = nums[source]
                for i in range(source,target,1):
                    nums[i] = nums[i+1]
                nums[target] = temp
            print(nums)
        
        for i in range(len(index)):
            insert(i,index[i])
        return nums

if __name__ == '__main__':
    nums = [0,1,2,3,4]
    index = [0,1,2,2,1]
    sol = Solution()
    sol.createTargetArray(nums,index)