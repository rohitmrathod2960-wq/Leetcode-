class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int repeating = -1;
        int missing = -1;

        for (int i = 1; i <= n * n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (grid[j][k] == i) {
                        cnt++;
                    }
                }
            }
            if (cnt == 2) {
                repeating = i;
            }
            else if (cnt == 0) {
                missing = i;
            }
            if (repeating != -1 && missing != -1) {
                break;
            }
        }
        return {repeating, missing};
    }
};