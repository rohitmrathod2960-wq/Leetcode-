class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        long long cnt = 0;
        map<int, int> mpp;
        mpp[nums[0]]++;

        for (int i = 1; i < n; i++) {
            map<int, int> temp;
            temp[nums[i]]++;

            for (auto it : mpp) {
                int AND = it.first & nums[i];
                temp[AND] += it.second;
            }
            mpp = temp;
            cnt += mpp[k];
        }
        if (nums[0] == k) {
            cnt++;
        }
        return cnt;
    }
};