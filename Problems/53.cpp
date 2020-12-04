class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxv = nums[0];
        for (int j = 1; j < nums.size(); ++j) {
            nums[j] = max(nums[j], nums[j-1] + nums[j]);
            maxv = max(maxv, nums[j]);
        }
        return maxv;
    }
};