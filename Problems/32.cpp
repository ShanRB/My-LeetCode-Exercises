class Solution {
public:
    int longestValidParentheses(string s) {
        vector<int> ck(s.size(),0);
        stack<int> stk;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(')
                stk.push(i);
            else {
                if (stk.empty()) 
                    ck[i] = -1;
                else {
                    ck[stk.top()] = 1;
                    ck[i] = 1;
                    stk.pop();
                }
            }
        }
        while (!stk.empty()) {
            ck[stk.top()] = -1;
            stk.pop();
        }
           
        int count = 0, result = 0;
        for (int n:ck) {
            if (n != -1)
                count += n;
            else {
                result = result>count?result:count;
                count = 0;
            }
        }
        result = result>count?result:count;
        return result;
    }
};