class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex+1,0);
        for(int i=0;i<rowIndex+1;++i){
            res[0]=1;
            for(int j=i;j>0;--j){
                res[j]=res[j]+res[j-1];
            }
        }
        return res;
    }
};
