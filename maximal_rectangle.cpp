class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()||matrix[0].empty()) return 0;
        int res=0;
        int m=matrix.size(), n=matrix[0].size();
        vector<int> temp;
        for(int i=0; i<m;++i){
            temp.resize(n);
            for(int j=0; j<n;++j){
                temp[j]=(matrix[i][j]=='1')? 1+temp[j]:0;
            }
            res=max(res, rectangle(temp));
        }
        return res;
    }
    int rectangle(vector<int>& temp){
        int res=0;
        temp.push_back(0);
        stack<int> m;
        for(int i=0;i<temp.size();++i){
            if(m.empty()||temp[m.top()]<=temp[i]) m.push(i);
            else{
                int idx=m.top(); m.pop();
                res=max(res,temp[idx]*(m.empty()? i:i-m.top()-1));
                i--;
            }
        }
        return res;
    }
};
