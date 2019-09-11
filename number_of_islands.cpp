class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()||grid[0].empty()) return 0;
        int w=grid[0].size();
        int h=grid.size();
        int res=0;
        for(int i=0;i<w;++i){
            for(int j=0; j<h;++j){
                if(grid[j][i]=='1'){
                    res++;
                    dfs(grid,i,j,w,h);
                }
            }
        }
        return res;
    }
    void dfs(vector<vector<char>>& grid,int x,int y, int w, int h){
        if(x<0||x==w||y<0||y==h||grid[y][x]=='0'){return;}
        grid[y][x]='0';
        dfs(grid,x-1,y,w,h);
        dfs(grid,x+1,y,w,h);
        dfs(grid,x,y-1,w,h);
        dfs(grid,x,y+1,w,h);
    }
};
