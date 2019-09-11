class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0]<nums.back()) return nums[0];
        int left=0;
        int right=nums.size()-1;
        while(left+1<right){
            int mid=left+(right-left)/2;
            if(nums[mid]<nums[right]) right=mid;
            else left=mid;
        }
        return min(nums[left],nums[right]);
    }
};
