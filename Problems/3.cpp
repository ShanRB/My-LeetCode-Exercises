class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> indexes;
        int maxLen = 0, prev = 0;
        for (int i=0; i<s.size(); ++i) {
            maxLen = maxLen > i-prev?maxLen:i-prev;
            auto it = indexes.find(s[i]);
            if (it != indexes.end()) 
                prev = prev>indexes[s[i]]+1?prev:indexes[s[i]]+1;
            indexes[s[i]]= i;
        }
        maxLen = maxLen > s.size()-prev?maxLen:s.size()-prev;
        return maxLen;
    }
};