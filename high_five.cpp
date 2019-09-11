class Solution {
public:
    static bool compare(vector<int>&A, vector<int>&B){
        if(A[0]==B[0]) return A[1]>B[1];
        else return A[0]<B[0];
    }
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        sort(items.begin(),items.end(),compare);
        vector<vector<int>> res;
        int id=items[0][0];
        int score=(items[0][1]+items[1][1]+items[2][1]+items[3][1]+items[4][1])/5;
        res.push_back({id,score});
        for(int i=0;i<items.size();++i){
            if(items[i][0]!=id){
                id=items[i][0];
                score=(items[i][1]+items[i+1][1]+items[i+2][1]+items[i+3][1]+items[i+4][1])/5;
                res.push_back({id,score});
            }
        }
        return res;
    }
};
