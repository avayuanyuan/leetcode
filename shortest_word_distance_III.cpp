class Solution {
public:
    int shortestWordDistance(vector<string>& words, string word1, string word2) {
        int t=-1,p1=-1,p2=-1;
        int res=INT_MAX;
        for(int i=0;i<words.size();++i){
            t=p1;
            if(words[i]==word1) p1=i;
            if(words[i]==word2) p2=i;
            if(p1!=-1 && p2!=-1){
            if(word1==word2) {if(t!=-1 && t!=p1){res=min(res,abs(t-p1));}}
            else{res=min(res,abs(p1-p2));}}
        }
        return res;
    }
};
