class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size()<3) return res;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-2;++i){
            if(i>=1 && nums[i]==nums[i-1]) continue;
            else{
                int low=i+1; int high=nums.size()-1;
                while(low<high){
                    int k=nums[i]+nums[low]+nums[high];
                    if(k<0) low++;
                    else if(k>0) high--;
                    else{
                        res.push_back({nums[i],nums[low],nums[high]});
                        while(low<high&& nums[low]==nums[low+1])++low;
                        while(low<high&& nums[high]==nums[high-1])--high;
                        ++low;
                        --high;
                    }
                }
            }
        }
        return res;
    }
};
