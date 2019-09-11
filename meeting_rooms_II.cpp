class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<int> begins,ends;
        for(int i=0;i<n;++i){
            begins.push_back(intervals[i][0]);
            ends.push_back(intervals[i][1]);
        }
        sort(begins.begin(),begins.end());
        sort(ends.begin(),ends.end());
        int res=0;
        for(int i=0,endpoint=0;i<n;++i){
            if(begins[i]<ends[endpoint]) res++;
            else endpoint++;
        }
        return res;
    }
};
