class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long sum = 1LL * n * (n + 1) / 2;

        long long actualSum = 0;

        for(int x : nums) {
            actualSum += x;
        }
        return sum - actualSum;
    }
};