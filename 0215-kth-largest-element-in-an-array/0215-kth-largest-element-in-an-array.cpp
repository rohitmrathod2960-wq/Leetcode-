class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int KthLargest=nums[n-k];
        return KthLargest;
            }
};