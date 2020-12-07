class Solution(object):
    def titleToNumber(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans = 0
        for c in s:
            ans = ans * 26 + ord(c) - ord('A') + 1
        return ans