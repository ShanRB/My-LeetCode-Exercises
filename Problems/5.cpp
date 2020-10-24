class Solution {
public:
    string longestPalindrome(string s) {
        int i = 0;
        int size = s.size();
        int maxLen = 1, leftstart = 0; 
        while (i < size && size - i > maxLen / 2) {
            int left = i, right = i;
            while (right < size && s[left] == s[right + 1])
                right += 1;
            i = right + 1;
            while (left > 0 && right < size-1 && s[left-1] == s[right+1]){
                --left;
                ++right;
            }
            if (maxLen < right-left+1) {
                leftstart = left;
                maxLen = right - left + 1;
            }
        }
        return s.substr(leftstart, maxLen);
    }
};