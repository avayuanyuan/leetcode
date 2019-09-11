class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) return {};
        vector<vector<int>> res;
        vector<int> begins,ends;
        int n=intervals.size();
        for(int i=0;i<n;++i){
            begins.push_back(intervals[i][0]);
            ends.push_back(intervals[i][1]);
        }
        sort(begins.begin(),begins.end());
        sort(ends.begin(),ends.end());
        for(int i=0, j=0;i<n;++i){
            if(i==n-1 || begins[i+1]>ends[i]){
                res.push_back({begins[j],ends[i]});
                j=i+1;
            }
        }
        return res;
    }
};
