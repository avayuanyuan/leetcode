class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> m(wordDict.cbegin(),wordDict.cend());
        s=" "+s;
        vector<int> dp(s.size(),0);
        dp[0]=1;
        for(int i=1;i<s.size();++i){
            for(int j=0;j<=i;++j){
                if(dp[j]==1){
                string temp=s.substr(j+1,i-j);
                if(m.count(temp)) {dp[i]=1;break;}
                }
            }
        }
        return dp[s.size()-1];
    }
};
