class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1, mid;
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;
            if (nums[mid] > target)
                hi = mid - 1;
            else if (nums[mid] == target)
                return mid;
            else
                lo = mid + 1;
        }
        if (nums[lo] < target)
            return lo + 1;
        else
            return lo;
    }
};