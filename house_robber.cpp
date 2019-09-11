class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size()==1) return nums.front();
        int n=nums.size();
        vector<int> dp(n,0);
        dp[0]=nums[0];
        dp[1]=max(nums[1],nums[0]);
        for(int i=2;i<n;++i){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp.back();
    }
};
