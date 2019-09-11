class Solution {
public:
    int calculate(string s) {
        stack<int> m;
        long res=0, sign=1;
        for(int i=0; i<s.size();++i){
            if(isdigit(s[i])){
                long num=0;
                while(isdigit(s[i])){
                    num=num*10+s[i]-'0';
                    i++;
                }
                res+=sign*num;
            }
            if(s[i]=='+'){sign=1;}
            if(s[i]=='-'){sign=-1;}
            if(s[i]=='('){m.push(res);m.push(sign);res=0;sign=1;}
            if(s[i]==')'){sign=m.top();m.pop();res=res*sign+m.top();m.pop();}
        }
        if(res>INT_MAX) return INT_MAX;
        if(res<INT_MIN) return INT_MIN;
        return res;
    }
};
