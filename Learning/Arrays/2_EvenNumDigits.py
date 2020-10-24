class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        count = 0
        for n in nums:
            if self.countDigit(n) % 2 == 0:
                count += 1
        return count

    def countDigit(self,num):
        count = 1
        num = num /10
        while num >= 1:
            count += 1
            num = num / 10
        return count
