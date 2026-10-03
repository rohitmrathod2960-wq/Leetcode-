class Solution {
public:
    void markrow(vector<vector<bool>>& mark, int i, int m) {
        for (int j = 0; j < m; j++) {
            mark[i][j] = true;
        }
    }
    void markcol(vector<vector<bool>>& mark, int j, int n) {
        for (int i = 0; i < n; i++) {
            mark[i][j] = true;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<bool>> mark(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    markrow(mark, i, m);
                    markcol(mark, j, n);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mark[i][j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};