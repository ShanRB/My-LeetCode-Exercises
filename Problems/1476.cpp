class SubrectangleQueries {
public:
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        rec = rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        updates.push_back(vector<int>{row1,row2,col1,col2,newValue});
    }
    
    int getValue(int row, int col) {
        for (int i = updates.size()-1; i >= 0; --i) {
            if (row >= updates[i][0] && row <= updates[i][1] && col >= updates[i][2] && col <= updates[i][3])
                return updates[i][4];
        }
        return rec[row][col];
    }
private:
    vector<vector<int>> rec;
    vector<vector<int>> updates;
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */