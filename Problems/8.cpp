class Solution {
public:
    int myAtoi(string s) {
        long res = 0;
        bool neg = false;
        bool num = false;
        
        for (auto c:s) {
            if (c != ' ' && c != '+' && c != '-' && !isdigit(c))
                break;
            if (!num && isdigit(c))
                num = true;
            if (num) {
                if (isdigit(c)) {
                    int d = c - '0';
                    if (neg)
                        res = res * 10 - d;
                    else
                        res = res * 10 + d;
                    if (res > INT_MAX){
                        res = INT_MAX;
                        break;
                    } else if (res < INT_MIN) {
                        res = INT_MIN;
                        break;
                    }
                } else
                    break;
            } else {
                if (c == '-') {
                    neg = true;
                    num = true;
                }
                if (c == '+')
                    num = true;
            }
            
        }

        return res;
    }
};