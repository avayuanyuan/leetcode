class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        if(candidates.empty()) return result;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        helper(candidates,target,0,result,temp);
        return result;
    }
    
    void helper(vector<int>& candidates, int target, int index, vector<vector<int>>& result, vector<int>temp){
        if(target<0){return;}
        else if(target==0){result.push_back(temp);return;}
        else{
            for(int i=index;i<candidates.size();++i){
                if(i!=index && candidates[i]==candidates[i-1]) continue;
                if(target<candidates[i]){break;}
                temp.push_back(candidates[i]);
                helper(candidates,target-candidates[i],i+1,result,temp);
                temp.pop_back();
            }
        }
    }
};
