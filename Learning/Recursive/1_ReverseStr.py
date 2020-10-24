""" 
Write a function that reverses a string. The input string is given as an array of characters char[].
"""
class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        self.helper(0,len(s)-1,s)
    
    def helper(self,left, right, s):
        if left >= right:
            return;
        s[left],s[right] = s[right],s[left]
        self.helper(left+1,right-1,s)