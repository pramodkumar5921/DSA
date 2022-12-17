class Solution {
public:
int dp[2001][2001];
int solve(string s,int i,int j){
    // base case
    if(i>=j){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(ispanlindrome(s,i,j)==true){
        return 0;
    }
    // recursive case

    int mn=INT_MAX;
    for(int k=i;k<j;k++){
        int temp=solve(s,i,k)+solve(s,k+1,j)+1;
        if(temp<mn){
            mn=temp;
        }
    }
    return dp[i][j]=mn;
}
    int minCut(string s) {
        memset(dp,-1,sizeof(dp));
        int i=0,j=s.size()-1;
       return solve(s,i,j); 
    }
    bool ispanlindrome(string s,int i,int j){
        // int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
};
