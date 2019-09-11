class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(2,vector<int>(n+1,INT_MAX));
        for(int i=1;i<=n;++i){
            for(int j=1;j<=i;++j){
                dp[1][j]=triangle[i-1][j-1];
                if(i==1 && j==1) continue;
                if(j==1) dp[1][j]+=dp[0][j];
                else if(j==i) dp[1][j]+=dp[0][j-1];
                else dp[1][j]+=min(dp[0][j-1],dp[0][j]);
            }
            swap(dp[0],dp[1]);
        }
        return *min_element(dp[0].begin(),dp[0].end());
    }
};
