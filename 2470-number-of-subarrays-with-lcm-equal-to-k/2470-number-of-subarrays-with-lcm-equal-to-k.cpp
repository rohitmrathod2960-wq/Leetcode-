class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (k % nums[i] != 0) {
                continue;
            }
            long long l = 1;

            for (int j = i; j < n; j++) {
                if (k % nums[j] != 0) {
                    break;
                }
                long long g = gcd(l, (long long)nums[j]);
                l = (l / g) * nums[j];

                if (l == k) {
                    count++;
                }
            }
        }
        return count; 
    }
};