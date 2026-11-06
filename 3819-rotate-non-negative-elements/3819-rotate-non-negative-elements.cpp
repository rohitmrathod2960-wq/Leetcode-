class Solution {
public:
     void reverseNonNeg(vector<int>& nums,
                       int left, int right) {

        int n = nums.size();
        int l = -1, r = -1;
        int count = 0;

        for (int i = 0; i < n; i++) {

            if (nums[i] >= 0) {

                if (count == left)
                    l = i;

                if (count == right) {
                    r = i;
                    break;
                }
                count++;
            }
        }

        while (l < r) {

            swap(nums[l], nums[r]);
            l++;
            r--;

            while (l < n && nums[l] < 0)
                l++;

            while (r >= 0 && nums[r] < 0)
                r--;
        }
    }

    vector<int> rotateElements(vector<int>& nums, int k) {

        int m = 0;

        for (int x : nums) {
            if (x >= 0)
                m++;
        }

        if (m == 0)
            return nums;

        k %= m;

        if (k == 0)
            return nums;

        reverseNonNeg(nums, 0, k - 1);

        reverseNonNeg(nums, k, m - 1);

        reverseNonNeg(nums, 0, m - 1);

        return nums;
    }
};