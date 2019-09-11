class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator==0) return to_string(0);
        if(denominator==0) return "INFINITY";
        int sign1=(numerator>0)? 1:-1;
        int sign2=(denominator>0)? 1:-1;
        long d1=abs(long(numerator));
        long d2=abs(long(denominator));
        long res=d1/d2;
        long rem=d1%d2;
        string s=(sign1*sign2==1)?"":"-";
        if(rem==0){
            s+=to_string(res);
            return s;
        }else{
            s+=(to_string(res)+".");
        }
        string k="";
        unordered_map<long,int> m;
        int idx=0;
        while(rem!=0){
            if(m.count(rem)){
                k.insert(m[rem],"(");
                k+=')';
                return s+k;
            }
            m[rem]=idx;
            idx++;
            k+=to_string(rem*10/d2);
            rem=(rem*10)%d2;
        }
        return s+k;
    }
};
