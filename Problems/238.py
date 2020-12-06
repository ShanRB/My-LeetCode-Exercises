class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        output = [1]
        for i in range(1,len(nums)):
            output.append(nums[i-1] * output[-1])
        temp = 1
        for j in range(len(nums)-1,-1,-1):
            output[j] = output[j] * temp

            temp *= nums[j]
        return output