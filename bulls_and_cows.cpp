class Solution {
public:
    string getHint(string secret, string guess) {
        int cow=0,bull=0;
        vector<int> cnt(10,0);
        for(int i=0;i<secret.size();++i){
            if(secret[i]==guess[i]){
                ++bull;
            }else{
                ++cnt[secret[i]-'0'];
            }
        }
        for(int i=0;i<secret.size();++i){
            if(secret[i]!=guess[i] && cnt[guess[i]-'0']){
                ++cow;
                --cnt[guess[i]-'0'];
            }
        }
        return to_string(bull)+"A"+to_string(cow)+"B";
    }
};
