class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        for(int i=0; i<=nums.size(); ++i){
            dfs(nums,temp,res,i,0);
        }
        return res;
    }
    void dfs(vector<int>& nums,vector<int>& temp, vector<vector<int>>& res, int level,int idx){
        if(temp.size()==level){res.push_back(temp); return;}
        for(int i=idx;i<nums.size();++i){
            temp.push_back(nums[i]);
            dfs(nums,temp,res,level,i+1);
            temp.pop_back();
        }
    }
};
