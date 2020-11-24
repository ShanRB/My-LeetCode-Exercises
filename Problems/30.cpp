#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;


vector<int> findSubstring(string s, vector<string>& words) {
    vector<int> result;
    unsigned total = s.size(), s_size = words.size(), w_size = words[0].size();
    if (total < s_size * w_size)
        return result;

    map<string,int> uword;
    for (string w:words){
        uword[w] += 1;
    }
    
    for (int i = 0; i <= total-s_size * w_size; ++i) {
        map<string,int> ucheck;
        bool invalid = false;
        for (int k = 0; k < s_size; ++k){
            string w = s.substr(i + k*w_size, w_size);
            ucheck[w] += 1;
        }
        if (invalid)
            continue;
        /*
        for (auto p = ucheck.begin(); p != ucheck.end(); ++p){
            cout << p->first << " >> " << p->second << "   ";
        }
        cout << endl;
        */
        if (ucheck == uword)
            result.push_back(i);         
    }
    
    return result;
}


int main() {

    vector<string> words = {"a","a"};
    string s = "a";
    vector<int> result = findSubstring(s,words);
    cout << result.size() << endl;
    for (auto p=result.begin(); p!=result.end(); ++p)
        cout << *p << endl;
    return EXIT_SUCCESS;
}
