class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.empty()||nums.size()<4){return {};}
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        for(int i=0;i<nums.size()-3;++i){
            if(i>0 && nums[i]==nums[i-1]){continue;}
            for(int j=i+1;j<nums.size()-2;++j){
                if(j>i+1 &&nums[j]==nums[j-1]){continue;}
                int low=j+1, high=nums.size()-1, sum=target-nums[i]-nums[j];
                while(low<high){
                    if(nums[low]+nums[high]==sum){
                        temp.clear();
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        res.push_back(temp);
                        while(low<high && nums[low]==nums[low+1]){++low;}
                        while(low<high && nums[high]==nums[high-1]){--high;}
                        ++low;
                        --high;
                    }
                    else{
                        if(nums[low]+nums[high]<sum){
                            ++low;
                        }
                        else{
                            --high;
                        }
                    }
                }
            }
        }
        return res;
    }
};
