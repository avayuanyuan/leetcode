class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()<=1) {return nums.size();}
        int slow=0;
        for(int i=1; i<nums.size();++i){
            if(nums[i]!=nums[i-1]){
                nums[slow+1]=nums[i];
                slow+=1;
            }
        }
        return slow+1;
    }
};
