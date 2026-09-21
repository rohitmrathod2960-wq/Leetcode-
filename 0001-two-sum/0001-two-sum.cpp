class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> arr;
        int left = 0;
        int right = n - 1;

        for(int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end());
        while(left < right) {
            int sum = arr[left].first + arr[right].first;
            if(sum == target) {
                return {arr[left].second, arr[right].second};
            }
            else if(sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
        return {-1, -1};
    }
};