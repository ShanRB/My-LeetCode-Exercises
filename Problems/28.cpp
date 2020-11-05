class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "")
            return 0;
        int n = needle.size(), p = 0;
        while (n + p <= haystack.size()) {
            if (haystack.substr(p,n) == needle)
                return p;
            p++;
            while (haystack[p] != needle[0] && p+n <= haystack.size())
                p++;
        }
        return -1;
    }
};