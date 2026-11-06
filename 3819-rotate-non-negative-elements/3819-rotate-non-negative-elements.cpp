class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> nonNeg;

        for (int x : nums) {
            if (x >= 0) {
                nonNeg.push_back(x);
            }
        }

        int m = nonNeg.size();

        if (m == 0)
            return nums;

        k %= m;

        rotate(nonNeg.begin(),
               nonNeg.begin() + k,
               nonNeg.end());

        int j = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] >= 0) {
                nums[i] = nonNeg[j];
                j++;
            }
        }
        return nums;
    }
};