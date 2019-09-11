class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if(prices.empty()||k==0) return 0;
        int n=prices.size();
        if(k>=n) return profit(prices);
        vector<vector<int>> local(n,vector<int>(k+1,0));
        vector<vector<int>> global(n,vector<int>(k+1,0));
        for(int i=1;i<n;++i){
            int diff=prices[i]-prices[i-1];
            for(int j=1;j<k+1;++j){
                local[i][j]=max(global[i-1][j-1]+max(0,diff),local[i-1][j]+diff);
                global[i][j]=max(global[i-1][j],local[i][j]);
            }
        }
        return global[n-1][k];
    }
    int profit(vector<int>&prices){
        int profit=0;
        for(int i=1;i<prices.size();++i){
            if(prices[i]>prices[i-1]){
                profit+=(prices[i]-prices[i-1]);
            }
        }
        return profit;
    }
};
