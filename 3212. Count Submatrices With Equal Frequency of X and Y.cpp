class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>xaxis(n,vector<int>(m,0));
        vector<vector<int>>yaxis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='X'){
                    xaxis[i][j]=1;
                }
                else{
                    xaxis[i][j]=0;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='Y'){
                    yaxis[i][j]=1;
                }
                else{
                    yaxis[i][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            xaxis[0][i]=xaxis[0][i-1]+xaxis[0][i];
        }
        for(int i=1;i<n;i++){
            xaxis[i][0]=xaxis[i-1][0]+xaxis[i][0];
        }
        for(int i=1;i<m;i++){
            yaxis[0][i]=yaxis[0][i-1]+yaxis[0][i];
        }
        for(int i=1;i<n;i++){
            yaxis[i][0]=yaxis[i-1][0]+yaxis[i][0];
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                xaxis[i][j]=xaxis[i-1][j]+xaxis[i][j-1]+xaxis[i][j]-xaxis[i-1][j-1];
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                yaxis[i][j]=yaxis[i-1][j]+yaxis[i][j-1]+yaxis[i][j]-yaxis[i-1][j-1];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(xaxis[i][j]==yaxis[i][j] and xaxis[i][j]!=0){
                    ans++;
                }
            }
        }
        return ans;
    }
};
