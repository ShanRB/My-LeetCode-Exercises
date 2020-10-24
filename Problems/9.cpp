class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        if (x < 10)
            return true;
        long y = 0;
        int count = 0;
        while (x > y) {
            y = y * 10 + x % 10;
            x /= 10;
            count++;
        }
        if (y >= 10)
            return (x == y) or (x == y/10);
        else
            return (x == y);
            
    }
};