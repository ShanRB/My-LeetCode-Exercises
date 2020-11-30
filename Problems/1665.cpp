class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(), tasks.end(), [this](vector<int> a, vector<int> b){return (a[1]-a[0]) < (b[1] - b[0]);});
        int engy = 0;
        for (int i = 0; i < tasks.size(); ++i) {
            // cout << "<" << tasks[i][0] << "," << tasks[i][1] << "> ";
            engy = max(engy + tasks[i][0], tasks[i][1]);
        }
        return engy;
    }
};