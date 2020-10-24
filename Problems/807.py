""" 
In a 2 dimensional array grid, each value grid[i][j] represents the height of a building located there. We are allowed to increase the height of any number of buildings, by any amount (the amounts can be different for different buildings). Height 0 is considered to be a building as well. 

At the end, the "skyline" when viewed from all four directions of the grid, i.e. top, bottom, left, and right, must be the same as the skyline of the original grid. A city's skyline is the outer contour of the rectangles formed by all the buildings when viewed from a distance. See the following example.

What is the maximum total sum that the height of the buildings can be increased?
"""
class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        size = len(grid)
        tb = [0] * size
        lr = [0] * size
        count = 0
        for i in  range(size):
            for j in range(size):
                count -= grid[i][j]
                if grid[i][j] > tb[i]:
                    tb[i] = grid[i][j]
                if grid[i][j] > lr[j]:
                    lr[j] = grid[i][j]
        
        for i in  range(size):
            for j in range(size):
                grid[i][j]=min(tb[i],lr[j])
                count += grid[i][j]
        return count