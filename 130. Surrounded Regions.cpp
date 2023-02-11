class Solution {
public:
    void dfs(int row,int col,vector<vector<char>>& board,
    vector<vector<int>>& vis,int delrow[],int delcol[]){
        vis[row][col]=1;
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<4;i++){
            int nrow=delrow[i]+row;
            int ncol=delcol[i]+col;
            if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and vis[nrow][ncol]==0 and  board[nrow][ncol]=='O'){
                dfs(nrow,ncol,board,vis,delrow,delcol);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int col=0;col<n;col++){
            if(vis[0][col]==0 and board[0][col]=='O'){
                dfs(0,col,board,vis,delrow,delcol);
            }
        }
        for(int col=0;col<n;col++){
            if(vis[m-1][col]==0 and board[m-1][col]=='O'){
                dfs(m-1,col,board,vis,delrow,delcol);
            }
        }
        for(int row=0;row<m;row++){
            if(vis[row][0]==0 and board[row][0]=='O'){
                dfs(row,0,board,vis,delrow,delcol);
            }
        }
        for(int row=0;row<m;row++){
            if(vis[row][n-1]==0 and board[row][n-1]=='O'){
                dfs(row,n-1,board,vis,delrow,delcol);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]==1){
                    board[i][j]='O';
                }
                else{
                    board[i][j]='X';
                }
            }
        }

        return ;
    }
};
