class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows==1)
            return s;
        vector<string> res(numRows,"");
        int base = numRows * 2 - 2;
        for (int i = 0; i<s.size(); ++i) {
            int row = i % base > base/2 ? base-i%base:i%base;
            res[row].push_back(s[i]);
        }
        string result;
        for (auto it = res.begin(); it != res.end(); ++it)
            result += *it;
         return result;
    }
};