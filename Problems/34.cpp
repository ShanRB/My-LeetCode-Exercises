class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size()-1, mid;
        vector<int> result = {-1,-1};
        if (nums.size() == 0)
            return result;
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;
            if (nums[mid] < target)
                lo = mid + 1;
            else
                hi = mid;
        }
        if (nums[lo] != target)
            return result;
        result[0] = lo;
        lo = 0;
        hi = nums.size() - 1;
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;
            if (nums[mid] <= target)
                lo = mid + 1;
            else
                hi = mid;
        }
        if (nums[hi] == target)
            result[1] = hi;
        else
            result[1] = hi - 1;
        return result;
    }
};