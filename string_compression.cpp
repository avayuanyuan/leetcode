class Solution {
public:
    int compress(vector<char>& chars) {
        int curr=0;
        for(int i=0,j=0;i<chars.size();i=j){
            while(j<chars.size()&&chars[i]==chars[j])j++;
            chars[curr++]=chars[i];
            if(j-i==1) continue;
            else{
                for(char c: to_string(j-i)){
                    chars[curr++]=c;
                }
            }
        }
        return curr;
    }
};
