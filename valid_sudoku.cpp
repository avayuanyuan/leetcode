class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if(board.empty()||board.size()!=9||board[0].size()!=9) return false;
        
        for(int row=0;row<9;++row){
            vector<bool> token(9,false);
            for(int i=0;i<9;++i){
                char elem=board[row][i];
                if(elem!='.'){
                int num=elem-'0';
                if(token[num]==true){return false;}
                token[num]=true;}
            }           
        }
        
        for(int col=0;col<9;++col){
            vector<bool> token(9,false);
            for(int i=0;i<9;++i){
                char elem=board[i][col];
                if(elem!='.'){
                int num=elem-'0';
                if(token[num]==true){return false;}
                token[num]=true;}
            }           
        }
        
        for(int box=0;box<9;++box){
            vector<bool> token(9,false);
            for(int i=0;i<3;++i){
                for(int j=0;j<3;++j){
                    char elem=board[i+3*(box/3)][j+3*(box%3)];
                if(elem!='.'){
                int num=elem-'0';
                if(token[num]==true){return false;}
                token[num]=true;}
                }
            }           
        }
        return true;
    }
        
        
};
