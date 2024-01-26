class Solution {
public:
    int M,N;
    vector<int>drow={-1,0,1,0};
    vector<int>dcol={0,1,0,-1};
    int MOD=1e9+7;
    int dp[51][51][51];
    int solve(int startRow,int startColumn,int maxMove){
        if(startRow<0 || startRow>=M || startColumn<0 || startColumn>=N){
            return 1;
        }
        if(maxMove<=0){
            return 0;
        }
        if(dp[startRow][startColumn][maxMove]!=-1){
            return dp[startRow][startColumn][maxMove];
        }
        int result=0;
        for(int i=0;i<4;i++){
            int nrow=startRow+drow[i];
            int ncol=startColumn+dcol[i];
            result=(result+solve(nrow,ncol,maxMove-1))%MOD;
        }
        return dp[startRow][startColumn][maxMove]=result;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        M=m;
        N=n;
        memset(dp,-1,sizeof(dp));
        int ans=solve(startRow,startColumn,maxMove); 
        return ans;
    }
};
