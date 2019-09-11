class Solution {
public:
    double myPow(double x, int n) {
        long N=n;
        if(N<0){
            x=1/x;
            N=-N;
        }
        double res=1, curr=x;
        for(long i=N;i>0;i/=2){
            if(i%2==1) res=res*curr;
            curr=curr*curr;
        }
        return res;
    }
};
