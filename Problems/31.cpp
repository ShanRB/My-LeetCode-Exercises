class Solution {
public:
    void quickSort(vector<int>& nums) {
        
    }
    void nextPermutation(vector<int>& nums) {
        int i = nums.size()-2;
        while (i >= 0 && nums[i] >= nums[i+1]){
            --i;
        }
        if (i >= 0) {
            int j = nums.size() - 1;
            while (j >= i && nums[j] <= nums[i])
                --j;
            swap(nums, i, j);
        }
        
        reverse(nums, i+1, nums.size()-1);
    }
private:
    void swap(vector<int>& nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    void reverse(vector<int>& nums, int s, int e) {
        while (s < e) {
            swap(nums,s,e);
            ++s;
            --e;
        }
    }
};