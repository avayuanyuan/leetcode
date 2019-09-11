class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        unordered_set<char> m;
        for(int i=0,j=0;i<s.size();++i){
            if(!m.count(s[i])) {m.insert(s[i]); len=max(len,i+1-j);}
            else {
                m.erase(s[j]);
                j++;
                i--;
            }            
        }
        return len;
    }
};
