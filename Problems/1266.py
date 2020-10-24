""" 
On a plane there are n points with integer coordinates points[i] = [xi, yi]. Your task is to find the minimum time in seconds to visit all points.

You can move according to the next rules:

In one second always you can either move vertically, horizontally by one unit or diagonally (it means to move one unit vertically and one unit horizontally in one second).
You have to visit the points in the same order as they appear in the array.
"""
class Solution(object):
    def minTimeToVisitAllPoints(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        seconds = 0
        for i in range(1,len(points)):
            x_dis = abs(points[i][0]-points[i-1][0])
            y_dis = abs(points[i][1]-points[i-1][1])
            seconds += abs(x_dis - y_dis)
            seconds += min(x_dis,y_dis)
        return seconds