class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        int maxi=nums[0],maxii=0,mini=nums[0],minii=0;
        for(int i=1; i<n; i++){
            if(nums[i]<=mini){
                mini=nums[i];
                minii=i;
            }else if(nums[i]>=maxi){
                maxi=nums[i];
                maxii=i;
            }
        }
        int x=min(minii,maxii), y=max(maxii,minii);
        int ans=min({y+1 , n-x , (x+1)+(n-y) });
        return ans;
    }
};