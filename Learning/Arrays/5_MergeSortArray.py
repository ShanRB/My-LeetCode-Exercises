from typing import List
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        
        while m + n > 0:
            if m > 0 and n > 0:
                if nums1[m-1] >= nums2[n-1]:
                    nums1[m+n-1] = nums1[m-1]
                    m = m - 1
                else:
                    nums1[m+n-1] = nums2[n-1]
                    n = n - 1
            elif m <= 0:
                nums1[m+n-1] = nums2[n-1]
                n -= 1
            else:
                nums1[m+n-1] = nums1[m-1]
                m -= 1
            


if __name__ == '__main__':
    nums1 = [1,2,3,0,0,0]
    m = 3
    nums2 = [2,5,6]
    n = 3

    sol = Solution()
    sol.merge(nums1,m,nums2,n)
    print(nums1)