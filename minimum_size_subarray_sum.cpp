class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n=nums.size();
        vector<int> sum(n+1,0);
        for(int i=1;i<sum.size();++i){
            sum[i]=sum[i-1]+nums[i-1];
        }
        deque<int> m;
        int len=n+2;
        for(int i=0;i<sum.size();++i){
            while(!m.empty()&&sum[m.back()]>=sum[i]) m.pop_back();
            while(!m.empty()&&sum[i]>=s+sum[m.front()]){
                len=min(len,i-m.front());
                m.pop_front();
            }
            m.push_back(i);
        }
        return (len==n+2)?0:len;
    }
};
