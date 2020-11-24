class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums)-1
        while left <= right:
            pivot = (left+right)//2
            
            if target == nums[pivot]:
                return pivot
            
            if nums[left] <= nums[pivot]:
                if nums[left] <= target <= nums[pivot]:
                    right = pivot - 1
                else:
                    left = pivot + 1
            else:
                if nums[pivot] <= target <= nums[right]:
                    left = pivot + 1
                else:
                    right = pivot - 1
        return -1