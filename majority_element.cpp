class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int res=0;
        for(int num:nums){
            if(cnt==0) {res=num; cnt++;}
            else if(res==num) cnt++;
            else cnt--;
        }
        return res;
    }
};
