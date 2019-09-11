class Solution {
public:
    bool isValid(string s) {
        stack<char> m;
        for(int i=0;i<s.size();++i){
            if(s[i]=='(' ||s[i]=='[' || s[i]=='{') m.push(s[i]);
            else{
                if (m.empty()) return false;
                if(s[i]==')' && m.top()!='(') return false;
                if(s[i]==']' && m.top()!='[') return false;
                if(s[i]=='}' && m.top()!='{') return false;
                m.pop();
            }
        }
        return m.empty();
    }
};
