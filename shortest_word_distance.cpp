class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {
        int dist=INT_MAX, a=INT_MAX, b=INT_MAX;
        for (int i=0; i<words.size();++i){
            if(words[i]==word1) {a=i; dist=min(dist,abs(a-b));}
            if(words[i]==word2) {b=i; dist=min(dist,abs(a-b));}
        }
        return dist;
    }
};
