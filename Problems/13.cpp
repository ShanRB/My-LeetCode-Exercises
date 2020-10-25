class Solution {
public:
    int romanToInt(string s) {
        char prev = ' ';
        int num = 0;
        map<char,int> mapping = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        for (char c : s) {
            num += mapping[c];
            if (((c == 'V'||c == 'X')&&(prev=='I')) ||
                ((c == 'L'||c == 'C')&&(prev=='X')) ||
                ((c == 'D'||c == 'M')&&(prev=='C')) ) 
                num -= 2 * mapping[prev];
            prev = c;
        }
        return num;
    }
};