class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        long left=1,right=x;
        while(left+1<right){
            long mid=left+(right-left)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid<x) left=mid;
            else right=mid;
        }
        return left;
    }
};
