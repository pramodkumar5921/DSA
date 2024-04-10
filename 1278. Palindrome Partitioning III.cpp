class Solution {
public:
     int dp[101][101];
    int change(string &temp){
        int i=0,j=temp.size()-1;
        int cnt=0;
        while(i<j){
            if(temp[i]!=temp[j]){
                cnt++;
            }
            i++;j--;
        }
        return cnt;
    }
    int solve(int idx,int k,string &s,int m,int n){
        // base case
        if(idx==n){
            if(k==m){
                return 0;
            }
            return 1e9;
        }
        if(dp[idx][k]!=-1){
            return dp[idx][k];
        }
        // recursive case
        string temp;
        int ans=INT_MAX;
        for(int j=idx;j<n;j++){
            temp+=s[j];
            ans=min(ans,change(temp)+solve(j+1,k+1,s,m,n));
        }
        return dp[idx][k]=ans;
    }
    int palindromePartition(string s, int k) {
        int n=s.size();
        memset(dp,-1,sizeof(dp));
        int ans=solve(0,0,s,k,n);
        return ans;
    }
};
