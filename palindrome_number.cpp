class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long res=0;
        long original =x;
        while(x>0){
            int pop=x%10;
            x/=10;
            res=res*10+pop;
        }
        return (original==res);
    }
};
