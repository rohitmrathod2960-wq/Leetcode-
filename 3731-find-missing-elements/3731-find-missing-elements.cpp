class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        int n = nums.size();
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        int total = (maxi * (maxi + 1)) / 2 - ((mini - 1) * mini) / 2;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        int missingSum = total - sum;
        vector<int> ans;

        sort(nums.begin(), nums.end());

        for (int i = 1; i < n; i++) {

            int start = nums[i - 1] + 1;
            int end = nums[i] - 1;

            for (int j = start; j <= end; j++) {
                ans.push_back(j);
            }
        }
        return ans;
    }
};