class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1;
        while(left+1<right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) left=mid;
            else right=mid;
        }
        if(target<=nums[left]){
            return left;
        }else if(target<=nums[right]){
            return right;
        }else return right+1;
    }
};
