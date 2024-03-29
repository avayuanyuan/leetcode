class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()<2) return true;
        int reach=0;
        for(int i=0;i<nums.size()-1 && i<=reach; ++i){
            reach=max(reach,i+nums[i]);
            if(reach>=nums.size()-1) return true;
        }
        return false;
    }
};
