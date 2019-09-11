class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size(),n=board[0].size();
        vector<int> idx{1,1,1,0,-1,-1,-1,0},
                    idy{1,0,-1,-1,-1,0,1,1};
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                int cnt=0;
                for(int move=0;move<8;++move){
                    int x=i+idx[move];
                    int y=j+idy[move];
                    if(x>=0 && x<m && y>=0 && y<n &&(board[x][y]==1||board[x][y]==2)){
                        ++cnt;
                    }
                }
                if(board[i][j]==1&&(cnt<2||cnt>3)) board[i][j]=2;
                if(board[i][j]==0&&cnt==3)board[i][j]=3;
            }
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                board[i][j]%=2;
            }
        }
    }
};
