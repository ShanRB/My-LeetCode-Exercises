""" 
Given a non-negative index k where k ≤ 33, return the kth index row of the Pascal's triangle.

Note that the row index starts from 0.
"""

class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        if rowIndex == 1:
            return [1,1]
        newRow = []
        preRow = self.getRow(rowIndex-1)
        for i in range(1,len(preRow)):
            newRow.append(preRow[i-1] + preRow[i])
        return newRow