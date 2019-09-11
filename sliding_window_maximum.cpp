class Solution {
public:
/*deque    
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> m;
        vector<int> res;
        for(int i=0;i<nums.size();++i){
            while(!m.empty()&&m.front()+k-1<i) m.pop_front();
            while(!m.empty()&&nums[m.back()]<nums[i]) m.pop_back();
            m.push_back(i);
            if(i>=k-1) res.push_back(nums[m.front()]);
        }
        return res;
    }
*/
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> m;
        vector<int> res;
        for(int i=0;i<nums.size();++i){
            while(!m.empty()&& m.top().second+k-1<i)m.pop();
            m.push({nums[i],i});
            if(i>=k-1) res.push_back(m.top().first);
        }
        return res;
    }
};
