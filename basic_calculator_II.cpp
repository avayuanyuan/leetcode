class Solution {
public:
    int calculate(string s) {
        long res=0, num=0; 
        char sign='+';
        stack<long> m;
        for(int i=0; i<s.size();++i){
            if(isdigit(s[i])){
                num=num*10+s[i]-'0';
            }
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||i==s.size()-1){
                if(sign=='+')m.push(num);
                else if(sign=='-')m.push(-num);
                else if(sign=='*'){int top=m.top();m.pop(); m.push(top*num);}
                else if(sign=='/'){int top=m.top();m.pop(); m.push(top/num);}
                num=0;
                sign=s[i];
            }
        }
        while(!m.empty()){res+=m.top();m.pop();}
        return res;
    }
};
