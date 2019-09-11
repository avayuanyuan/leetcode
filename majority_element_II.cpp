class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1=0,num2=0;
        int cnt1=0,cnt2=0;
        vector<int> res;
        if(nums.empty()) return res;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==num1) cnt1++;
            else if(nums[i]==num2) cnt2++;
            else if(cnt1==0){cnt1++;num1=nums[i];}
            else if(cnt2==0){cnt2++;num2=nums[i];}
            else{cnt1--;cnt2--;}
        }
        cnt1=0;
        cnt2=0;
        for(int i=0; i<nums.size();++i){
            if(nums[i]==num1) cnt1++;
            if(nums[i]==num2) cnt2++;
        }
        if(num1!=num2){
            if(cnt1>nums.size()/3) res.push_back(num1);
            if(cnt2>nums.size()/3) res.push_back(num2);
            return res;
        }
        else{
            res.push_back(num1);
            return res;
        }
    }
};
