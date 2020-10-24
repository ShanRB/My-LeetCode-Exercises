""" 
Balanced strings are those who have equal quantity of 'L' and 'R' characters.

Given a balanced string s split it in the maximum amount of balanced strings.

Return the maximum amount of splitted balanced strings.
"""
class Solution:
    def balancedStringSplit(self, s: str) -> int:
        count = 0
        stringcount = {'R':0,'L':0}
        for e in s:
            stringcount[e] += 1
            if stringcount['R'] > 0 and stringcount['R']==stringcount['L']:
                count += 1
                stringcount.fromkeys(stringcount, 0)
        return count