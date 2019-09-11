class Solution {
public:
    int divide(int dividend, int divisor) {
        int sign=1;
        if((dividend<0 && divisor>0) || (dividend>0 &&divisor<0)) sign=-1;
        long ldividend=abs(long(dividend));
        long ldivisor= abs(long(divisor));
        if(ldividend<ldivisor) return 0;
        long result=divide(ldividend,ldivisor);
        int res=0;
        if(result>INT_MAX){
            res=(sign>0)? INT_MAX:INT_MIN;
        }else{
            res=int(sign*result);
        }
           return res;
    }
           
    long divide(long dividend, long divisor){
        if(dividend<divisor) return 0;
        long sum=divisor;
        long multiple=1;
        while(sum+sum<dividend){
            sum+=sum;
            multiple+=multiple;
        }
        return multiple+divide(dividend-sum,divisor);
    }
};
