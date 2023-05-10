class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int srow=0,scol=0;
        int erow=n-1,ecol=n-1;
        int total=n*n;
        int cnt=1;
        vector<vector<int>>ans(n,vector<int>(n,0));
        while(cnt<=total){
            int i=scol;
            while(i<=ecol){
                ans[srow][i]=cnt;
                cnt++;
                i++;
            }
            if(cnt>=total){
                break;
            }
            srow++;
            int j=srow;
            while(j<=erow){
                ans[j][ecol]=cnt;
                cnt++;
                j++;
            }
            ecol--;
            int k=ecol;
            while(k>=scol){
                ans[erow][k]=cnt;
                cnt++;
                k--;
            }

            erow--;
            int l=erow;
            while(l>=srow){
                ans[l][scol]=cnt;
                cnt++;
                l--;
            }
            scol++;
        }
        return ans;
    }
};
