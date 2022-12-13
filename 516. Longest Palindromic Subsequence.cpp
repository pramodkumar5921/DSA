class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string s1;
        for(int i=0;i<s.size();i++){
            s1.push_back(s[s.size()-i-1]);
        }
        int n=s.size();
       int dp[n+1][n+1];
       for(int i=0;i<n+1;i++){
           dp[i][0]=0;
       }
       for(int j=0;j<n+1;j++){
           dp[0][j]=0;
       }
       for(int i=1;i<n+1;i++){
           for(int j=1;j<n+1;j++){
               if(s[i-1]==s1[j-1]){
                   dp[i][j]=1+dp[i-1][j-1];
               }
               else{
                   dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
               }
           }
       }
       return dp[n][n];

    }
};
