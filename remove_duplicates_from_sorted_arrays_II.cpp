class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()||nums.size()<=2) return nums.size();
        int left=2;
        for(int right=2;right<nums.size();++right){
            if(nums[left-2]!=nums[right]){
                nums[left]=nums[right];
                left+=1;
            }
        }
        return left;
    }
};
