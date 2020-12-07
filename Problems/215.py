class Solution(object):
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        
        def partition(left,right,pivot):
            nums[pivot], nums[right] = nums[right], nums[pivot]
            store_index = left
            for i in range(left, right):
                if nums[i] > nums[right]:
                    nums[i], nums[store_index] = nums[store_index], nums[i]
                    store_index += 1
            nums[right], nums[store_index] = nums[store_index], nums[right]
            return store_index
        
        def quickselect(left,right, topk):
            if left == right:
                return 
            pivot = random.randint(left,right)
            pivot = partition(left,right,pivot)
            if topk == pivot:
                return 
            if pivot < topk:
                quickselect(pivot+1, right, topk)
            else:
                quickselect(left, pivot-1, topk)
                
        n = len(nums)
        quickselect(0,n-1,k-1)
        return nums[k-1]
        