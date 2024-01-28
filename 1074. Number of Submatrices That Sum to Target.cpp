class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>grid=matrix;
        for(int row=0;row<n;row++){
            for(int col=1;col<m;col++){
                grid[row][col]=grid[row][col]+grid[row][col-1];
            }
        }
        int result=0;
        for(int startcol=0;startcol<m;startcol++){
            for(int j=startcol;j<m;j++){
                unordered_map<int,int>mp;
                mp[0]++;
                int sum=0;
                for(int row=0;row<n;row++){
                    sum=sum+grid[row][j]-(startcol>0 ? grid[row][startcol-1]:0);
                    if(mp.find(sum-target)!=mp.end()){
                        result+=mp[sum-target];
                    }
                    mp[sum]++;
                }
            }
        }
        return result;
    }
};
