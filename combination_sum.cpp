class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        if(candidates.empty()) return res;
        sort(candidates.begin(),candidates.end());
        dfs(candidates,target,0,temp,res);
        return res;
    }
    void dfs(vector<int>& candidates, int level, int idx, vector<int>& temp, vector<vector<int>>& res){
        if(level==0) {res.push_back(temp); return;}
        else{
            for(int i=idx; i<candidates.size();++i){
                if(candidates[i]>level) break;
                else{
                    temp.push_back(candidates[i]);
                    dfs(candidates,level-candidates[i],i,temp,res);
                    temp.pop_back();
                }
            }
        }
    }
};
