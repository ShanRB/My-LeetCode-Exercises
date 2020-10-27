class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.size() == 0)
            return result;
        map<char,vector<string>> alphabet = {
            {'2',{"a","b","c"}},
            {'3',{"d","e","f"}},
            {'4',{"g","h","i"}},
            {'5',{"j","k","l"}},
            {'6',{"m","n","o"}},
            {'7',{"p","q","r","s"}},
            {'8',{"t","u","v"}},
            {'9',{"w","x","y","z"}}
        };
        result.push_back("");
        for (char c:digits) {
            vector<string> temp;
            for (string next:alphabet[c]) {
                for (string str:result)
                    temp.push_back(str + next);
            }
            result = temp;
        }
        return result;
    }
};