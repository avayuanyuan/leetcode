class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> m;
        int sum;
        while(true){
            sum=0;
            while(n>0){
                sum+=(n%10)*(n%10);
                n/=10;
            }
            n=sum;
            if(m.count(n)) break;
            m.insert(n);
        }
        return n==1;
    }
};
