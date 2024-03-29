class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.empty()) return -1;
        int left=0,right=nums.size()-1;
        while(left+1<right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<nums[right]){
                if(nums[mid]<target && target<=nums[right]) left=mid;
                else{right=mid;}
            }else{
                if(nums[mid]>target && target>=nums[left]) right=mid;
                else left=mid;
            }
        }
        if(nums[left]==target) return left;
        else if(nums[right]==target) return right;
        else return -1;
    }
};
