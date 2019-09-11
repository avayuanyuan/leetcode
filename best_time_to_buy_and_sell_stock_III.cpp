class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int n=prices.size();
        vector<vector<int>> local(n,vector<int>(3,0));
        vector<vector<int>> global(n,vector<int>(3,0));
        for(int i=1;i<n;++i){
            int diff=prices[i]-prices[i-1];
            for(int j=1;j<3;++j){
                local[i][j]=max(global[i-1][j-1]+max(0,diff),local[i-1][j]+diff);
                global[i][j]=max(global[i-1][j],local[i][j]);
            }
        }
        return global[n-1][2];
    }
};
