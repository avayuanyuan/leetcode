class Solution {
public:
    int maxCoins(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size()==1) return nums[0];
        int n=nums.size();
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        vector<vector<int>> dp(n+2,vector<int>(n+2,0));
        for(int len=0;len<=n-1;++len){
            for(int i=1;i<=n-len;++i){
                int j=i+len;
                for(int pivot=i;pivot<=j;++pivot){
                    dp[i][j]=max(dp[i][j],nums[pivot]*nums[i-1]*nums[j+1]+dp[i][pivot-1]+dp[pivot+1][j]);
                }
            }
        }
        return dp[1][n];
    }
};
