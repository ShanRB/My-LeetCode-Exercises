""" 
Students are asked to stand in non-decreasing order of heights for an annual photo.

Return the minimum number of students that must move in order for all students to be standing in non-decreasing order of height.

Notice that when a group of students is selected they can reorder in any possible way between themselves and the non selected students remain on their seats.
"""
class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        return sumj(a!=b for a,b in zip(heights,sorted(heights)))