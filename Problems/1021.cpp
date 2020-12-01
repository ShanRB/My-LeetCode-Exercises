class Solution {
public:
    string removeOuterParentheses(string S) {
        int count = 0;
        string result;
        for (auto c:S) {
            if (c == '('){
                if (count)
                    result.push_back(c);
                count++;
            } else if (c == ')') {
                count--;
                if(count)
                        result.push_back(c);
            }
        }
    return result;
    }
};