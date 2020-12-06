class Solution(object):
    def rotate(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        n = len(matrix)
        for i in range(n):
            for j in range(i+1,n):
                if i != j:
                    matrix[i][j],matrix[j][i] = matrix[j][i], matrix[i][j]

        for m in matrix:
            l = 0
            r = n - 1
            while (l < r):
                m[l], m[r] = m[r], m[l]
                l += 1
                r -= 1
        return matrix
                