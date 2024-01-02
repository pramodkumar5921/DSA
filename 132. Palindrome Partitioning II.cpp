class Solution {
public:
    bool ispalindrome(string &str){
        int i=0,j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
    int solve(string &s,int idx,vector<int>&dp,int n){
        if(idx==n){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        string temp;
        int ans=INT_MAX;
        for(int j=idx;j<n;j++){
            temp+=s[j];
            if(ispalindrome(temp)==true){
                int cost=1+solve(s,j+1,dp,n);
                ans=min(ans,cost);
            }
        }
        return dp[idx]=ans;
    }
    int minCut(string s) {
        int n=s.size();
        vector<int>dp(n+1,-1);
        int ans=solve(s,0,dp,n);
        return ans-1;
    }
};
