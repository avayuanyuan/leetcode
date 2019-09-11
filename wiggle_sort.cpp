class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<=2) return;
        for(int i=1;i<nums.size()-1;i+=2){
            swap(nums[i],nums[i+1]);
        }
    }
};
