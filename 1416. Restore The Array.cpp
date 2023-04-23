class Solution {
public:
    const int mod=1e9+7;
    int solve(int idx,string &s,int k,vector<int>&dp){
        // base case
        int n=s.size();
        if(idx>=n){
            return 1;
        }
        if(s[idx]=='0'){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        long ans=0;
        long long num=0;
        for(int end=idx;end<n;end++){
            num=num*10+s[end]-'0';
            if(num>k){
                break;
            }
            ans=(ans%(mod)+solve(end+1,s,k,dp)%(mod))%(mod);
        }
        return dp[idx]=ans;
    }
    int numberOfArrays(string s, int k) {
        int n=s.size();
        vector<int>dp(n+1,-1);
        int ans=solve(0,s,k,dp);
        return ans;
    }
};
