class Solution {
public:
    int maxDepth(string s) {
        int left = 0, right = 0, depth = 0;
        for (char c : s) {
            if (c == '(')
                ++left;
            else if (c == ')')
                ++right;
            depth = max(depth, left - right);
        }
        depth = max(depth, left - right);
        return depth;
    }
};