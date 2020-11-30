class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxValue = 0;
        for (int n: candies)
            maxValue = maxValue > n ? maxValue : n;
        for (int n: candies)
            result.push_back(n + extraCandies >= maxValue);
        return result;
    }
};