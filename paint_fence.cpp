class Solution {
public:
    int numWays(int n, int k) {
        if(n==0 || k==0) return 0;
        if(n==1) return k;
        int same=k;
        int diff=k*(k-1);
        for(int i=3;i<=n;++i){
            int temp=same;
            same=diff;
            diff=(same+temp)*(k-1);
        }
        return same+diff;
    }
};
