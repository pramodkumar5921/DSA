class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int srow=0,scol=0;
        int erow=m-1,ecol=n-1;
        int total=m*n;
        int cnt=0;
        vector<int>ans;
        while(cnt!=total){
            int i=scol;
            while(i<=ecol){
                ans.push_back(matrix[srow][i]);
                i++;
                cnt++;
            }
            if(cnt==total){
                break;
            }
            srow++;
            int j=srow;
            while(j<=erow){
                ans.push_back(matrix[j][ecol]);
                j++;
                cnt++;
            }
            if(cnt==total){
                break;
            }
            ecol--;
            int k=ecol;
            while(k>=scol){
                ans.push_back(matrix[erow][k]);
                k--;
                cnt++;
            }
            if(cnt==total){
                break;
            }
            erow--;
            int l=erow;
            while(l>=srow){
                ans.push_back(matrix[l][scol]);
                l--;
                cnt++;
            }
            scol++;
            if(cnt==total){
                break;
            }
        }
        return ans;
    }
};
