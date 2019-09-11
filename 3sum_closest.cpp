class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=nums[0]+nums[1]+nums[2];
        int diff=abs(target-sum);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;++i){
            if(i>=1 && nums[i]==nums[i-1]) continue;
            else{
                int low=i+1, high=nums.size()-1;
                while(low<high){
                int s=nums[i]+nums[low]+nums[high];
                if(s==target) return s;
                else if(s<target) low++;
                else high--;
                
                if(abs(target-s)<diff){
                    diff=abs(target-s);
                    sum=s;
                }
                }
            }
        }
        return sum;
    }
};
