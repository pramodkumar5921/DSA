class Solution {
public:
    int m,n;
    vector<int>drow={-1,0,1,0};
    vector<int>dcol={0,1,0,-1};
    bool check_remain(int row,int col,int idx,vector<vector<char>>&board,string &word){
        if(idx==word.size()){
            return true;
        }
        if(row<0 || row>=m || col<0 || col>=n || board[row][col]=='$'){
            return false;
        }
        if(board[row][col]!=word[idx]){
            return false;
        }
        char temp=board[row][col];
        board[row][col]='$';
        for(int i=0;i<4;i++){
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            if(check_remain(nrow,ncol,idx+1,board,word)==true){
                return true;
            }
        }
        board[row][col]=temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] and check_remain(i,j,0,board,word)==true){
                    return true;
                }
            }
        }
        return false;
    }
};
