class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(board.empty()||board[0].empty()) return false;
        int w=board[0].size();
        int h=board.size();
        for(int i=0; i<w;++i){
            for(int j=0;j<h;++j){
                if(existDFS(board,word,0,i,j,w,h)) return true;
            }
        }
        return false;
    }
    bool existDFS(vector<vector<char>>&board, string word, int level,int x, int y,int w, int h){
        if(x<0||x==w||y<0||y==h||board[y][x]!=word[level]) return false;
        if(level==word.size()-1) return true;
        char temp=board[y][x];
        board[y][x]=1;
        bool found=existDFS(board,word,level+1,x-1,y,w,h)||
                   existDFS(board,word,level+1,x+1,y,w,h)||
                   existDFS(board,word,level+1,x,y-1,w,h)||
                   existDFS(board,word,level+1,x,y+1,w,h);
        board[y][x]=temp;
        return found;
    }
};
