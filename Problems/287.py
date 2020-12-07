class Solution(object):
    def findDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = collections.defaultdict(int)
        for n in nums:
            if count[n]:
                return n
            count[n] += 1
        return 0