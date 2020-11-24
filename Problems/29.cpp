class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == 0)
            return 0;
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if (divisor == 1)
            return dividend;
        long divd = (long) dividend;
        long divr = (long) divisor;
        bool pos = true;
        if (divd < 0) {
            pos = !pos;
            divd = -divd;
        }
        if (divr < 0){
            pos = !pos;
            divr = -divr;
        }
        int count = 0;
      
        while (divd >= divr){
            divd -= divr;
            count += 1;
            if (count == INT_MAX)
                break;
        }    
        
        
        return pos?count:-count;
    }
};