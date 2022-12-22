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

    int mn=INT_MAX;int left,right;
    for(int k=i;k<j;k++){
        if(dp[i][k]!=-1){
            left=dp[i][k];
        }
            else{
                left=solve(s,i,k);
                dp[i][k]=left;
            }
        
         if(dp[k+1][j]!=-1){
            right=dp[k+1][j];
         }
            else {
                right=solve(s,k+1,j);
                // right=solve(s,k+1,j);
                dp[k+1][j]=right;
            }
        
        int temp=right+left+1;
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
