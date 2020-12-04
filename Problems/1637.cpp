class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int wid = 0;
        for (int i = 0; i < points.size()-1; ++i) {
            wid = max(wid, points[i+1][0] - points[i][0]);
        }
        return wid;
    }
};