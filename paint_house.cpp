class Solution {
public:
    int minCost(vector<vector<int>>& costs) {
        if(costs.empty()) return 0;
        int n=costs.size();
        vector<vector<int>> dp(n+1,vector<int>(3,INT_MAX));
        dp[1][0]=costs[0][0];
        dp[1][1]=costs[0][1];
        dp[1][2]=costs[0][2];
        for(int i=2;i<=n;++i){
            dp[i][0]=min(dp[i-1][1],dp[i-1][2])+costs[i-1][0];
            dp[i][1]=min(dp[i-1][0],dp[i-1][2])+costs[i-1][1];
            dp[i][2]=min(dp[i-1][0],dp[i-1][1])+costs[i-1][2];
        }
        return *min_element(dp[n].begin(),dp[n].end());
    }
};
