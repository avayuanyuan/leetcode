class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size()==1) return nums.front();
        vector<int> nums1(nums.begin(),nums.end()-1);
        vector<int> nums2(nums.begin()+1,nums.end());
        int res=max(robbing(nums1),robbing(nums2));
        return res;
    }
    int robbing(vector<int>& nums){
        if(nums.empty()) return 0;
        if(nums.size()==1) return nums.front();
        vector<int> dp(nums.size(),0);
        dp[0]=nums.front();
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();++i){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp.back();
    }
};
