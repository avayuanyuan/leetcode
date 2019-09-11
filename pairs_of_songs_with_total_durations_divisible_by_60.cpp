class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> m(60,0);
        int sum=0;
        for(int i=0;i<time.size();++i){
            sum+=m[(60-time[i]%60)%60];
            ++m[time[i]%60];
        }
        return sum;
    }
};
