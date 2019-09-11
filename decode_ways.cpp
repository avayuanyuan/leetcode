class Solution {
public:
    int numDecodings(string s) {
        if(s.empty()||s[0]=='0') return 0;
        if(s.size()==1) return 1;
        vector<int> dp(s.size(),0);
        dp[0]=1;
        
        for(int i=1;i<s.size();++i){
            if(!isvalid(s[i]) && !isvalid(s[i-1],s[i])) return 0;
            if(isvalid(s[i])) dp[i]+=dp[i-1];
            if(i>1 && isvalid(s[i-1],s[i])) dp[i]+=dp[i-2];
            else if(i==1 && isvalid(s[i-1],s[i])) dp[i]+=1;
        }
        return dp.back();
    }
    bool isvalid(char& a){
        return (a!='0');
    }
    bool isvalid(char& a, char&b){
        int temp=(a-'0')*10+(b-'0');
        return (temp>=10 && temp<=26);
    }
};
