class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> indices;

        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                indices.push_back(i);
            }
        }

        int m = indices.size();

        if (m == 0)
            return nums;

        k %= m;

        vector<int> ans = nums;

        for (int i = 0; i < m; i++) {

            int originalIndex = indices[i];

            int rotatedIndex = (i + k) % m;

            ans[originalIndex] = nums[indices[rotatedIndex]];
        }
        return ans;
    }
};