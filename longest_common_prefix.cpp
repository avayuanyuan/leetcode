class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){return "";}
        string res="";
        for(int i=0; i<strs[0].size();++i){
            char c=strs[0][i];
            for(int j=0; j<strs.size()-1;++j){
                if(i>=strs[j+1].size()|| strs[j+1][i]!=c){return res;}
            }
            res.push_back(c);
        }
        return res;
    }
};
