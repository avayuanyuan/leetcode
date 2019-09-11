class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0; i<n;++i){
            sum+=nums[i];
        }
        return 0.5*n*(n+1)-sum;
    }
};
