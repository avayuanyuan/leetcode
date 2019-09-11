class Solution {
public:
    int getMoneyAmount(int n) {
        if(n==1) return 0;
        if(n==2) return 1;
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;++i) dp[i][i]=0;
        for(int i=1;i<=n-1;++i) dp[i][i+1]=i;
        for(int len=2;len<=n-1;++len){
            for(int i=1;i<=n-len;++i){
                int j=i+len;
                int minres=INT_MAX;
                for(int pivot=i;pivot<=j;++pivot){
                    minres=min(minres,pivot+max((pivot-1>=i)? dp[i][pivot-1]:0, (pivot+1<=j)? dp[pivot+1][j]:0));
                }
                dp[i][j]=minres;
            }
        }
        return dp[1][n];
    }
};
