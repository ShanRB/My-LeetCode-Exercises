class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int s = arr.size(), result = 0;
        int m = s / 2 + s % 2;
        
        for (int j = 1; j <= s; j += 2) {
            for (int i = 0; i != s; ++i) {
                int step = min({j, min(i+1,s-i), s-j+1});
                result += step * arr[i];
            }
        }
        
        return result;
    }
};