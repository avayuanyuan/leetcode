class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<long long> m;
        int j=0;
        for(int i=0;i<nums.size();++i){
            if(abs(j-i)>k) m.erase(nums[j++]);
            auto it=m.lower_bound((long long)nums[i]-t);
            if(it!=m.end() && abs(*it-nums[i])<=t) return true;
            m.insert(nums[i]);
        }
        return false;
    }
};
