class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        vector<bool> found(nums.size(),true);
        dfs(nums,res,temp,found,0);
        return res;
    }
    
    void dfs(vector<int>& nums, vector<vector<int>>&res, vector<int>& temp, vector<bool>found,int idx){
        if(temp.size()==nums.size()) {res.push_back(temp); return;}
        for(int i=idx;i<nums.size();++i){
            if(found[i]){
                found[i]=false;
                temp.push_back(nums[i]);
                dfs(nums,res,temp,found,0);
                temp.pop_back();
                found[i]=true;
            }
        }
    }
};
