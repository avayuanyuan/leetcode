class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        int i=0, j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]==target) {res.push_back(i);res.push_back(j);return res;}
            else if(nums[i]+nums[j]<target) ++i;
            else --j;
        }
         return res;   
    }
};
