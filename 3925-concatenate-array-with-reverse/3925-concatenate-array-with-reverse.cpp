class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>ans=nums;
        vector<int>rev=nums;

        reverse(rev.begin(),rev.end());
        ans.insert(ans.end(),rev.begin(),rev.end());
        return ans;
    }
};