class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();
        int i=0,j=m-1;
        while(i>=0 and i<n and j>=0 and j<m){
            if(mat[i][j]==target){
                return true;
            }
            else if(mat[i][j]>target){
                j--;
            }
            else if(mat[i][j]<target){
                i++;
            }
        }
        return false;
    }
};
