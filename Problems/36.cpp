class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> rows(9,vector<int>(9)), cols(9,vector<int>(9)), box(9,vector<int>(9));
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != '.') {
                    int n = board[i][j] - '0' - 1;
                    int ib = (i / 3) + (j / 3) * 3;
                    if (rows[i][n] || cols[j][n] || box[ib][n])
                        return false;
                    rows[i][n] = 1;
                    cols[j][n] = 1;
                    box[ib][n] = 1;
                }
            }
        }
        return true;
    }
};