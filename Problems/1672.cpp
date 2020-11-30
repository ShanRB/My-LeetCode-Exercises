class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int result = 0;
        for (int i = 0; i < accounts.size(); ++i) {
            int temp = 0;
            for (int j = 0; j < accounts[i].size(); ++j) {
                temp += accounts[i][j];
            }
            result = result > temp? result : temp;
        }
        return result;
    }
};