class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        auto s1 = nums1.size();
        auto s2 = nums2.size();
        if (s1 > s2)
            return this-> findMedianSortedArrays(nums2, nums1);
        if (s1 == 0){
            if (s2 % 2 == 0)
                return double(nums2[(s2-1)/2] + nums2[(s2-1)/2+1]) / 2;
            else
                return nums2[(s2-1)/2];
        }
        
        int left = 0;
        int right = s1;
        while (left <= right) {
            int i = left + (right - left) / 2;
            int j = (s1 + s2 + 1) / 2 - i;
            if (i < s1 && j > 0 && nums1[i] < nums2[j-1]) 
                left = i + 1;
            else if (j < s2 && i > 0 && nums2[j] < nums1[i-1]) 
                right = i - 1;
            else {
                int maxL, minR;
                if (i == 0)
                    maxL = nums2[j-1];
                else if (j == 0)
                    maxL = nums1[i-1];
                else
                    maxL = nums1[i-1]>nums2[j-1]?nums1[i-1]:nums2[j-1];
                if ((s1+s2)%2 != 0)
                    return maxL;
                
                if (i == s1)
                    minR = nums2[j];
                else if (j == s2)
                    minR = nums1[i];
                else
                    minR = min(nums1[i],nums2[j]);

                return (double(maxL+minR))/2;
            }
        }
        return -1;
    }
};