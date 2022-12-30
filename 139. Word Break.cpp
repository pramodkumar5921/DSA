class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[n]=1;
        unordered_set<string>mp;
        for(auto i:wordDict){
            mp.insert(i);
        }
        for(int i=n-1;i>=0;i--){
            string wo;
            for(int j=i;j<n;j++){
                wo.push_back(s[j]);
                if(mp.find(wo)!=mp.end()){
                    if(dp[j+1]==1){
                       dp[i]=dp[j+1];  
                    }
                   
                }
            }
        }
        return dp[0];
    }
};
