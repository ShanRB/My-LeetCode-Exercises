class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";
        string s = countAndSay(n-1), result;
        char curr = s[0];
        int count = 1;
        for (int j = 1; j < s.size(); ++j) {
            if (s[j] == curr) {
                count += 1;
            } else {
                result.push_back('0' + count);
                result.push_back(curr);
                curr = s[j];
                count = 1;
            }
        }
        result.push_back('0' + count);
        result.push_back(curr);
        return result;
    }
};