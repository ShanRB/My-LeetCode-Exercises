class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0)
            return -1;
        if (nums[0] == target)
            return 0;
        else if (target > nums[0]) {
            // search to the right of head
            for (int i = 1; i < nums.size(); ++i) {
                if (nums[i] == target)
                    return i;
                if (nums[i] <= nums[0])
                    return -1;
            }
        }
        else {
            // search to the left of head
            for (int i = nums.size()-1; i > 0; --i) {
                if (nums[i] == target)
                    return i;
                if (nums[i] >= nums[0])
                    return -1;
            }
        }
        return -1;
    }
};