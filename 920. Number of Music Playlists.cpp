class Solution {
public:
const int mod=1e9+7;
    // vector<vector<int>>dp(100,vector<int>(100,-1));
    long dp[101][101];
    long long solve(int n,int goal,int k,int count_song,int count_unique){
        // base case
        if(count_song==goal){
            if(count_unique==n){
                return 1;
            }
            return 0;
        }
        if(dp[count_song][count_unique]!=-1){
            return dp[count_song][count_unique];
        }
        // recursive case
        long long result=0;
        // for unique_song
        if(n>count_unique)
        result+=(((n-count_unique)%mod)*(solve(n,goal,k,count_song+1,count_unique+1))%mod);
        // for count_unique
        if(count_unique>k)
        result+=(((count_unique-k)%mod)*(solve(n,goal,k,count_song+1,count_unique))%mod);
        return dp[count_song][count_unique]=result%mod;
    }
    int numMusicPlaylists(int n, int goal, int k) {
        memset(dp,-1,sizeof(dp));
       long long ans=solve(n,goal,k,0,0);
       return ans; 
    }
};
