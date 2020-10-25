class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1;
        int maxval = 0;
        while(i < j) {
            if (height[i] < height[j]) {
                maxval = max(maxval, height[i]*(j-i));
                ++i;
            } else {
                maxval = max(maxval, height[j]*(j-i));
                --j;
            }
        }
        return maxval;
    }
};