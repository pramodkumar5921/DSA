class Solution {
public:
    int solve(string &s,string &temp,int i,int j,vector<vector<int>>&dp){
        if(i<0){
            return 0;
        }
        if(j<0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=0;
        if(s[i]==temp[j]){
            ans=1+solve(s,temp,i-1,j-1,dp);
        }
        else{
            ans=max({solve(s,temp,i-1,j,dp),solve(s,temp,i,j-1,dp)});
        }
        return dp[i][j]=ans;
    }
    int minInsertions(string s) {
        string temp=s;
        reverse(temp.begin(),temp.end());
        int n=s.size();int m=temp.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int ans=solve(s,temp,n-1,m-1,dp);
        return s.size()-ans;
    }
};
