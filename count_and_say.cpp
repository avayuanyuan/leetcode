class Solution {
public:
    string countAndSay(int n) {
        if(n<=0) return "";
        string res="1";
        for(int i =2;i<=n;++i){
            int count=0;
            string curr="";
            char prev='.';
            for(int j=0;j<res.size();++j){
                if(res[j]==prev || prev=='.'){count++;}
                else{
                    string ct=to_string(count);
                    curr+=(ct+prev);
                    count=1;
                }
                prev=res[j];
            }
             string ct=to_string(count);
             curr+=(ct+prev);
            res=curr;
        }
        return res;
        
    }
};
