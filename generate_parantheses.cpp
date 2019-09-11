class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> m;
        string out="";
        helper(n,m,out,0,0);
        return m;
    }
    
    void helper(int &n, vector<string> &m, string out, int left, int right){
        if(right==n){m.push_back(out);return;}
        if(left<n){
            helper(n,m,out+'(',left+1,right);
            }
        if(right<left){
            helper(n,m,out+')',left,right+1);
        }
    }
};
