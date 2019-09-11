class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> m;
        for(string c:strs){
            string temp=c;
            sort(temp.begin(),temp.end());
            m[temp].push_back(c);
            
        }
        for(auto c:m) res.push_back(c.second);
        return res;
    }
};
