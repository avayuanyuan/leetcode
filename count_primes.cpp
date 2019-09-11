class Solution {
public:
    int countPrimes(int n) {
        if(n<3) return 0;
        vector<int> dp(n+1,1);
        dp[0]=0;
        dp[1]=0;
        dp[2]=1;
        for(int i=2;i<=sqrt(n);++i){
            if(!dp[i]) continue;
            for(int j=i*i;j<=n;j+=i){
                dp[j]=0;
            }
        }
        dp[n]=0;
        return accumulate(dp.begin(),dp.end(),0);
    }
};
