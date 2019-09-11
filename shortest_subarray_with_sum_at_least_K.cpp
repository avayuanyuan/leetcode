class Solution {
public:
    int shortestSubarray(vector<int>& A, int K) {
        int n=A.size();
        vector<int>sum(n+1,0);
        for(int i=1;i<sum.size();++i){
            sum[i]=sum[i-1]+A[i-1];
        }
        int len=n+2;
        deque<int> q;
        for(int i=0;i<sum.size();++i){
            while(!q.empty()&&sum[i]<=sum[q.back()]) q.pop_back();
            while(!q.empty()&&sum[i]>=K+sum[q.front()]){
                len=min(len,i-q.front());
                q.pop_front();
            }
            q.push_back(i);
        }
        return (len==n+2)?-1:len;
    }
};
