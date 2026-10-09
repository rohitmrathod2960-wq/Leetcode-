class Solution {
public:
    int nCr(int n, int r) {
        long long result = 1;

        for (int i = 0; i < r; i++) {
            result = result * (n - i) / (i + 1);
        }
        return result;
    }

  vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int i = 0; i < numRows; i++) {
            vector<int> row;

            for (int j = 0; j <= i; j++) {
                row.push_back(nCr(i, j));
            }
            ans.push_back(row);
        }
        return ans;
    }
};