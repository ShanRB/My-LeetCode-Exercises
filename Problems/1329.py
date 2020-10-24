class Solution(object):
    def diagonalSort(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: List[List[int]]
        """
        row = len(mat)
        col = len(mat[0])
        
        def sort(i,j):
            vals = []
            while i < row and j < col:
                vals.append(mat[i][j])
                i += 1
                j += 1
            vals.sort()
            while i>0 and j>0:
                i -= 1
                j -= 1
                mat[i][j] = vals.pop()
                
        
        for i in range(row-1):
            sort(i,0)
        for j in range(col-1):
            sort(0,j)
            
            
        return mat