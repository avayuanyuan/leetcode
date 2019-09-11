class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()<=2) {reverse(nums.begin(),nums.end());return;}
        int n=nums.size()-1;
        for(int i=n;i>0;--i){
            if(nums[i]>nums[i-1]){
                int idx=i-1;
                for(int j=n;j>idx;--j){
                    if(nums[j]>nums[idx]){
                        swap(nums[j],nums[idx]);
                        reverse(nums.begin()+idx+1,nums.end());
                        return;
                    }
                }
            }
        }
        reverse(nums.begin(),nums.end());
    }
};
