class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[] = {".-","-...","-.-.","-..",".","..-.","--.",
                         "....","..",".---","-.-",".-..","--","-.",
                         "---",".--.","--.-",".-.","...","-","..-",
                         "...-",".--","-..-","-.--","--.."};
        unordered_set<string> trans;
        for (string w:words) {
            string temp = "";
            for (char c:w) {
                temp += morse[c-'a'];
            }
            trans.insert(temp);
        }
        return trans.size();
    }
};