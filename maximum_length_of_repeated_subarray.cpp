class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int m=A.size(), n=B.size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        int res=0;
        dp[0][0]=(A[0]==B[0]);
        for(int i=1;i<m;++i) {dp[i][0]=(A[i]==B[0])? 1:0; res=max(res,dp[i][0]);}
        for(int j=1;j<n;++j) {dp[0][j]=(A[0]==B[j])? 1:0; res=max(res,dp[0][j]);}
        for(int i=1;i<m;++i){
            for(int j=1;j<n;++j){
                
                dp[i][j]=(A[i]==B[j])? 1+dp[i-1][j-1]:0;
                res=max(res,dp[i][j]);
            }
        }
        return res;
    }
};
