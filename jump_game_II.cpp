class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.empty() || nums.size()==1) return 0;
        int curMax=0, nextMax=0, step=0, index=0;
        while(index<=curMax){
            while(index<=curMax){
                nextMax=max(nextMax,index+nums[index]);
                ++index;
            }
            curMax=nextMax;
            ++step;
            if(curMax>= nums.size()-1) return step;
        }
        return 0;
    }
};
