class Solution {
public:
    void dfs(vector<vector<int>>& image,vector<vector<int>>& ans
    ,int sr,int sc,int color,int delrow[],int delcol[],int inicolor){
        int m=image.size();
        int n=image[0].size();
        ans[sr][sc]=color;
        for(int i=0;i<4;i++){
           int  nrow=sr+delrow[i];
           int  ncol=sc+delcol[i];
            if(ncol>=0 and ncol<n and nrow>=0 and nrow<m and image[nrow][ncol]==inicolor and
            ans[nrow][ncol]!=color){
                dfs(image,ans,nrow,ncol,color,delrow,delcol,inicolor);
            }
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor=image[sr][sc];
        vector<vector<int>>ans=image;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        dfs(image,ans,sr,sc,color,delrow,delcol,inicolor);
        return ans;
    }
};
