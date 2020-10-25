class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";
        string pre = strs[0];
        for (int i = 1; i < strs.size(); ++i) {
            int j = 0;
            while(j < pre.size() && j < strs[i].size()) {
                if (pre[j] != strs[i][j])
                    break;
                ++j;
            }
            pre = pre.substr(0,j);
        }
        return pre;
    }
};