class Solution {
public:
    int myAtoi(string str) {
        long num=0,sign=1;
        int i=0;
        while(str[i]==' ') {++i;}
        if(!isdigit(str[i])&&str[i]!='+'&&str[i]!='-') return 0;
        if(str[i]=='+'||str[i]=='-') {sign=(str[i]=='+')?1:-1;
                                      ++i;}
        if(str[i]=='+'||str[i]=='-') return 0;
        while(i<str.size()){
            if(isdigit(str[i])){
                num=num*10+str[i]-'0';
            }
            if(num>=LLONG_MAX/10){num=INT_MAX;break;}
            if(!isdigit(str[i])) break;
            ++i;
        }
        if(num>=INT_MAX&&sign==1) return INT_MAX;
        if(num>=INT_MAX&&sign==-1) return INT_MIN;
        num=sign*num;
        return num;
        
    }
};
