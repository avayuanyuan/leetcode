class Solution {
public:
    double knightProbability(int N, int K, int r, int c) {
        vector<vector<double>> dp0(N,vector<double>(N,0));
        dp0[r][c]=1.0;
        vector<int> idx{1,1,-1,-1,2,2,-2,-2},
                    idy{2,-2,2,-2,1,-1,1,-1};
        for(int move=0;move<K;++move){
            vector<vector<double>> dp1(N,vector<double>(N,0));
        for(int i=0;i<N;++i){
            for(int j=0;j<N;++j){
                for(int dic=0;dic<8;++dic){
                    double x=i+idx[dic];
                    double y=j+idy[dic];
                    if(x<0||x>=N||y<0||y>=N) continue;
                    else dp1[x][y]+=dp0[i][j];
                }
            }
        }
            swap(dp0,dp1);
        }
        double sum=0;
        for(int i=0;i<N;++i){
            for(int j=0;j<N;++j){
                sum+=dp0[i][j];
            }
        }
        return sum/pow(8,K);
    }
};
